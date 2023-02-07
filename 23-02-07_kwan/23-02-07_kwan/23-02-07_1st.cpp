//#include <iostream>
//namespace ns_test
//{
//	int num = 0;
//	void test()
//	{
//
//	}
//}
//using namespace std; //std namespace안에 있는 모든요소에 대한 접근을 풀어줌
//
//int main(void)
//{
//	ns_test::num = 1;
//	int num = 0;
//
//	std::cout << ns_test::num << std::endl;
//	std::cout << num << std::endl;
//
//	return 0;
//}
//
//#include <iostream>
//
// namespace ns_test1
// {
// namespace ns_test2
//	{
//	}
// }
// 
//namespace ns_test {
//	int num = 0;
//	void test() {
//		std::cout << num << std::endl;
//		std::cout << "hello world" << std::endl;
//	}
//}
//
//void bbb() {
//	ns_test::num = 5;
//	std::cout << "aaa";
//}
//
//// using namespace std; // std 네임스페이스 내에 있는 모든 요소에 대한 접근을 풀어줌.
//// using namespace ns_test;
//
//void aaa() {
//	ns_test::num = 7;
//	std::cout << "aaa : " << ns_test::num;
//}
//
//int main() {
//	using namespace ns_test;
//	num = 5;
//	test();
//	aaa();
//
//	return 0;
//}
// seoul namespace 만들고 안에 지역번호, 랜드마크의미 변수 만들기
// busan namespace 만들고 안에 지역번호, 랜드마트의미 변수 만들기
// 지역번호, 랜드마크 의미 변수의 이름은 seoul과 busan이 같아야 함
// main함수 안에서 위의 namespace에 있는 변수에 원하는값을 할당하고 출력
// busan namespace는 using 사용

//#include <iostream>
//namespace seoul
//{
//	std::string region = "02";
//	std::string landmark = "namsan tower";
//}
//namespace busan
//{
//	std::string region = "051";
//	std:: string landmark = "hae woon dae";
//}
//using namespace busan;
//int main(void)
//{
//	std::cout << seoul::region << std::endl;
//	std::cout << seoul::landmark << std::endl;
//	std::cout << region << std::endl;
//	std::cout << landmark << std::endl;
//	return 0;
//}

#include <iostream>
#include <fstream>
#include<string>

using std::ifstream; //<< 불러오는 명령어
bool fail()
{
	return true;
}
//using namespace std; << namespace 전체를 풀어버림
int main(void)
{
	//ifstream << 불러오는 명령어
	ifstream file;
	file.open("text.txt"); // <<ifstream 안에 있는 class를 사용함
	file.fail(); // 파일을 여는것에 실패하게 된다면 true가 됨, 성공하면 false가 됨
	if (file.fail()) //파일이 fail 났는지 확인하기 위한 방법
	{
		std::cout << "파일 없음" << std::endl;
		return -1;
	}
	std::cout << "아무글다" << std::endl;

	std::string str, str2, line;

	//file >> str; // 파일안의 내용을 std에 저장한다는 의미 but 이럴때는 space, enter까지 즉 공백 전까지만 읽어옴
	file >> str>>str2; // str은 hello를 읽어오고, str2는 world!를 읽어옴
	std::cout << str<<" " << str2 << std::endl;

	//while (file >> str >> str2) //홀수개인지 짝수개인지 알아야지 파일을 끝까지 읽어올 수 있음
	//{
	//	std::cout << str << " " << str2 <<std::endl;
	//}


	//while (file >> str >> str2) //홀수개인지 짝수개인지 알아야지 파일을 끝까지 읽어올 수 있음
	//{
	//	std::cout << str << " " << str2 << std::endl;
	//}


	//while (file >> str) 
	//{
	//	std::cout << str << " " << std::endl;
	//}

	std::getline(file, line); // file의 내용을 한 줄씩 읽어와 line에 담음.(enter 기준)
	std::cout << line; //컴파일 하면 한줄만 읽어오는 모습을 볼 수 있음

	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
	}

	return 0;

	int i = 1;
	while (std::getline(file, line)) //for문으로는 몇번돌지 특정하기 힘들어 코드가 더러워짐
	{
		if (i == 2)
			std::cout << line << std::endl;
		i++;
	}
	
	file.close(); // <<파일을 닫는기능을 함


	return 0;
}