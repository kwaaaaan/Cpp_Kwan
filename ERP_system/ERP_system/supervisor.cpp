#pragma comment(lib, "ws2_32.lib")
#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <WinSock2.h>
#include <stdlib.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
using namespace std;

class Inventory
{
private:
	sql::Connection* con; //
	std::string product_name;
	mutable int quantity;

public:
	Inventory(const std::string& name, int initial_quantity, sql::Connection* connection)
	{
		product_name = name;
		quantity = initial_quantity;
		con = connection;
	}
	void add_stock(int amount)
	{
		quantity += amount;
		std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("INSERT INTO inventory (product_name, quantity) VALUES (?, ?)"));
		pstmt->setString(1, product_name);
		pstmt->setInt(2, quantity);
		pstmt->execute();
		std::cout << amount << "���� " << product_name << " �߰���\n";
	}

	void sell_stock(int amount)
	{
		std::unique_ptr < sql::PreparedStatement> pstmt(con->prepareStatement("SELECT quantity FROM inventory WHERE product_name = ?"));
		pstmt->setString(1, product_name);
		std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

		if (res->next())
		{
			quantity = res->getInt(1);
			if (amount <= quantity)
			{
				quantity -= amount;

				std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("UPDATE inventory SET quantity = ? WHERE product_name = ?"));
				pstmt->setInt(1, quantity);
				pstmt->setString(2, product_name);
				pstmt->execute();

				std::cout << amount << "���� " << product_name << " �Ǹŵ�\n";
			}
			else
			{
				std::cout << "������\n";
			}
		}
		else
		{
			std::cout << product_name << "�� ���� ��� ������ ã�� �� �����ϴ�.\n";
		}
	}
	
	void display_stock() const
	{
		std::unique_ptr<sql::PreparedStatement> pstmt(con->prepareStatement("SELECT quantity FROM inventory WHERE product_name = ?"));
		pstmt->setString(1, product_name);
		std::unique_ptr<sql::ResultSet> res(pstmt->executeQuery());

		if (res->next())
		{
			quantity = res->getInt(1);
			std::cout << "���� " << product_name << " ���: " << quantity << "��\n";
		}
		else
		{
			std::cout << product_name << "�� ��� ������ ã�� �� �����ϴ�.\n";
		}
	}
};
// for demonstration only. never save your password in the code!
const std::string server = "tcp://127.0.0.1:3306"; // �����ͺ��̽� �ּ�
const std::string username = "user"; // �����ͺ��̽� �����
const std::string password = "1234"; // �����ͺ��̽� ���� ��й�ȣ

void main_menu()
{
	std::cout << "==== � �۾��� �����Ͻðڽ��ϱ�? ====" << std::endl;
	std::cout << "1. ��� �߰�" << std::endl;
	std::cout << "2. ��� �Ǹ�" << std::endl;
	std::cout << "3. ��� Ȯ��" << std::endl;
	std::cout << "4. ����" << std::endl;
	std::cout << "=======================================" << std::endl;
	std::cout << "���ϴ� �۾��� �����ϼ��� : " << std::endl;

}
int main()
{
	// MySQL Connector/C++ �ʱ�ȭ, ���� �������� �ʾƵ� Connector/C++�� �ڵ����� ������ ��
	sql::Driver* driver; //
	sql::Connection* con; //
	sql::Statement* stmt;
	sql::PreparedStatement* pstmt = nullptr;
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		std::cout << "Could not connect to server. Error message: " << e.what() << endl;
		std::system("pause");
		exit(1);
	}
	// please create database "erp_system" ahead of time 
	con->setSchema("erp_system");
	// �����ͺ��̽� ���� ����
	stmt = con->createStatement();

	bool is_running = true;
	while (is_running)
	{
		main_menu();
		int choice;
		std::cin >> choice;
		std::string inven;
		int quan;

		try
		{
			switch (choice)
			{
			case 1:
			{
				std::cout << "�߰��� ��� ������ �Է��ϼ��� (���� ���): ";
				std::cin >> inven >> quan;
				Inventory inventory(inven, quan, con);
				inventory.add_stock(quan);
				break;
			}
			case 2:
			{
				std::cout << "�Ǹŵ� ��� ������ �Է��ϼ��� (���� �Ǹŷ�): ";
				std::cin >> inven >> quan;
				Inventory inventory(inven, 0, con);
				inventory.sell_stock(quan);
				break;
			}
			case 3:
			{
				std::string inven;
				std::cout << "Ȯ���� ������ �Է��ϼ���: ";
				std::cin >> inven;
				Inventory inventory(inven, 0, con);
				inventory.display_stock();
				break;
			}
			case 4:
				is_running = false;
				break;
			default:
				std::cout << "�߸��� �����Դϴ�. �ٽ� ������ �ּ���." << std::endl;
				break;
			}

		}
		catch (sql::SQLException e)
		{
			std::cout << "Database error: " << e.what() << std::endl;
		}
	}

	//// MySQL Connector/C++ ����
	delete stmt;
	delete con;
	system("pause");
	return 0;
}