#pragma comment(lib, "ws2_32.lib")
#include <WinSock2.h>
#include <iostream>
#include <string>
#include <thread>
#include <sstream>
#include <WS2tcpip.h>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::thread;
const string server = "tcp://127.0.0.1:3306"; // 데이터베이스 주소
const string username = "user"; // 데이터베이스 사용자
const string password = "1234"; // 데이터베이스 접속 비밀번호

int main() {

	sql::Driver* driver; // 추후 해제하지 않아도 Connector/C++가 자동으로 해제해 줌
	sql::Connection* con;
	sql::Statement* stmt;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* result;
	// MySQL Connector/C++ 초기화
	//sql::
	try //커넥터 사전작업
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
	}
	catch (sql::SQLException e)
	{
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}
	// please create database "chatuser_db" ahead of time
	con->setSchema("chatuser_db");
	// connector에서 한글 출력을 위한 셋팅
	stmt = con->createStatement(); // 추가!!
	stmt->execute("set names euckr"); // 추가!!
	if (stmt) { delete stmt; stmt = nullptr; } // 추가!!

	//-------------------------------------


	WSADATA wsa;
	int code = WSAStartup(MAKEWORD(2, 2), &wsa);
	if (!code) {

		while (flag == 0) {
			cout << " 사용할 닉네임 입력 >>";
			cin >> my_nick;
			cout << " 사용할 비밀번호 입력 >>";
			cin >> pass;
			//아이디/비번 DB에서 검색해서 있는지 확인
			pstmt = con->prepareStatement("SELECT name, password FROM chatuser;");
			result = pstmt->executeQuery();

			while (result->next())
			{
				//printf("Reading from table=(%s, %d)\n", result->getString(1).c_str(), result->getInt(2));
				my_nick2 = result->getString(1).c_str();
				pass2 = result->getInt(2);
				if ((my_nick == my_nick2) && (pass == pass2))
				{
					flag = 1;
				}
			}
			if (flag == 1)
			{
				printf("로그인성공\n");
			}
			else
			{
				printf("로그인실패. 다시입력하십시오\n");
			}
		}
		client_sock = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
		SOCKADDR_IN client_addr = {};
		client_addr.sin_family = AF_INET;
		client_addr.sin_port = htons(7777);
		InetPton(AF_INET, TEXT("127.0.0.1"), &client_addr.sin_addr);
		while (1) {
			if (!connect(client_sock, (SOCKADDR*)&client_addr, sizeof(client_addr))) {
				cout << "Server Connect" << endl;
				send(client_sock, my_nick.c_str(), my_nick.length(), 0);
				break;
			}
			cout << "connecting..." << endl;
		}
		std::thread th2(chat_recv);
		while (1) {
			string text;
			std::getline(cin, text);
			const char* buffer = text.c_str();
			send(client_sock, buffer, strlen(buffer), 0);
		}
		th2.join();
		closesocket(client_sock);


		delete pstmt;
		delete con;
	}
	WSACleanup();
	return 0;
}