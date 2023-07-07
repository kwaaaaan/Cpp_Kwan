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
		std::cout << amount << "개의 " << product_name << " 추가됨\n";
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

				std::cout << amount << "개의 " << product_name << " 판매됨\n";
			}
			else
			{
				std::cout << "재고부족\n";
			}
		}
		else
		{
			std::cout << product_name << "에 대한 재고 정보를 찾을 수 없습니다.\n";
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
			std::cout << "현재 " << product_name << " 재고: " << quantity << "개\n";
		}
		else
		{
			std::cout << product_name << "의 재고 정보를 찾을 수 없습니다.\n";
		}
	}
};
// for demonstration only. never save your password in the code!
const std::string server = "tcp://127.0.0.1:3306"; // 데이터베이스 주소
const std::string username = "user"; // 데이터베이스 사용자
const std::string password = "1234"; // 데이터베이스 접속 비밀번호

void main_menu()
{
	std::cout << "==== 어떤 작업을 수행하시겠습니까? ====" << std::endl;
	std::cout << "1. 재고 추가" << std::endl;
	std::cout << "2. 재고 판매" << std::endl;
	std::cout << "3. 재고 확인" << std::endl;
	std::cout << "4. 종료" << std::endl;
	std::cout << "=======================================" << std::endl;
	std::cout << "원하는 작업을 선택하세요 : " << std::endl;

}
int main()
{
	// MySQL Connector/C++ 초기화, 추후 해제하지 않아도 Connector/C++가 자동으로 해제해 줌
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
	// 데이터베이스 쿼리 실행
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
				std::cout << "추가할 재고 정보를 입력하세요 (재고명 재고량): ";
				std::cin >> inven >> quan;
				Inventory inventory(inven, quan, con);
				inventory.add_stock(quan);
				break;
			}
			case 2:
			{
				std::cout << "판매된 재고 정보를 입력하세요 (재고명 판매량): ";
				std::cin >> inven >> quan;
				Inventory inventory(inven, 0, con);
				inventory.sell_stock(quan);
				break;
			}
			case 3:
			{
				std::string inven;
				std::cout << "확인할 재고명을 입력하세요: ";
				std::cin >> inven;
				Inventory inventory(inven, 0, con);
				inventory.display_stock();
				break;
			}
			case 4:
				is_running = false;
				break;
			default:
				std::cout << "잘못된 선택입니다. 다시 선택해 주세요." << std::endl;
				break;
			}

		}
		catch (sql::SQLException e)
		{
			std::cout << "Database error: " << e.what() << std::endl;
		}
	}

	//// MySQL Connector/C++ 정리
	delete stmt;
	delete con;
	system("pause");
	return 0;
}