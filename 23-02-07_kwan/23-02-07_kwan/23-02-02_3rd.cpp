////사용자에게 3명의 회원에 대한 이름 비밀번호 입력받고, 입력된 정보를 member.txt에 기록
////member.txt에 저장된 회원명부 출력(파일 읽기 모드)
//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main(void)
//{
//	std::ofstream file("member.txt");
//	std::string s;
//	std::string pw;
//	std::string name;
//
//	if (file.fail())
//	{
//		std::cout << "파일 없음" << std::endl;
//		return -1; //0은 성공을 의미
//	}
//
//
//	else
//	{
//
//		for (int i = 1; i <= 3; i++)
//		{
//			std::cout << i << "번째 회원 : ";
//			std::cin >> name >> pw;
//			s = s + name + pw + "\n";
//		}
//
//	}
//	std::cout << "--------- 회원 명부 파일 읽기----------" << std::endl;
//	std::cout << s << std::endl;
//	file << s;
//	std::ofstream out("member.txt", std::ios::out | std::ios::trunc);
//
//	return 0;
//}

// 사용자에게 "이름을 입력하세요.", "비밀번호를 입력하세요"라는 메세지 출력한뒤 이름, 비밀번호 입력받기
//member.txt에서 한 줄씩 "이름"과 "비번"을 검사하여 로그인 성공 시 "로그인 성공", 실패 "로그인 실패" 출력
// 여기서 member.txt앞 실습에서 만든 회원명부

//Hong 1234
//Sung 567
////Kim 8788
//
//#include <iostream>
//#include <fstream>
//#include <string>
//int main(void)
//
//{
//	std::string name;
//	std::string pw;
//	std::string str_1, str_2;
//	std::string s;
//	std::ifstream file("member.txt");
//
//	std::cout << "이름을 입력하세요: ";
//	std::cin >> name;
//	std::cout << "비번을 입력하세요: ";
//	std::cin >> pw;
//
//	while (file >> str_1 >> str_2) 
//	{
//		if (str_1 == name)
//		{
//			if (str_2 == pw)
//			{
//				std::cout << "로그인 성공" << std::endl;
//			}
//
//			else
//			{
//			std::cout << "로그인 실패" << std::endl;
//			}
//		}
//	}
//	return 0;
//}
#include <iostream>
#include <fstream>
#include <string>
int main(void)

{
	std::string name;
	std::string pw;
	std::string str_1, str_2;
	std::string s;
	std::string phone_number;
	std::ifstream file("member.txt");
	std::ifstream file_1("member_tel.txt");
	std::ofstream file_2("member_tel.txt");


	std::cout << "이름을 입력하세요: ";
	std::cin >> name;
	std::cout << "비번을 입력하세요: ";
	std::cin >> pw;

	while (file >> str_1 >> str_2) 
	{
		if (str_1 == name)
		{
			if (str_2 == pw)
			{
				std::cout << "로그인 성공" << std::endl;
				{
					std::cout << "전화번호를 입력해주세요" << std::endl;
					std::cin >> phone_number;
					file_2 << name << " " << phone_number;
					std::ofstream file_2("member_tel.txt", std::ios::out | std::ios::app);
				}

			}
			else
			{
			std::cout << "로그인 실패" << std::endl;
			}
		}
	}
	return 0;
}