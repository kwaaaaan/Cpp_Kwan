//#include <iostream>
//namespace ns_test
//{
//	int num = 0;
//	void test()
//	{
//
//	}
//}
//using namespace std; //std namespace�ȿ� �ִ� ����ҿ� ���� ������ Ǯ����
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
//// using namespace std; // std ���ӽ����̽� ���� �ִ� ��� ��ҿ� ���� ������ Ǯ����.
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
// seoul namespace ����� �ȿ� ������ȣ, ���帶ũ�ǹ� ���� �����
// busan namespace ����� �ȿ� ������ȣ, ���帶Ʈ�ǹ� ���� �����
// ������ȣ, ���帶ũ �ǹ� ������ �̸��� seoul�� busan�� ���ƾ� ��
// main�Լ� �ȿ��� ���� namespace�� �ִ� ������ ���ϴ°��� �Ҵ��ϰ� ���
// busan namespace�� using ���

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

using std::ifstream; //<< �ҷ����� ��ɾ�
bool fail()
{
	return true;
}
//using namespace std; << namespace ��ü�� Ǯ�����
int main(void)
{
	//ifstream << �ҷ����� ��ɾ�
	ifstream file;
	file.open("text.txt"); // <<ifstream �ȿ� �ִ� class�� �����
	file.fail(); // ������ ���°Ϳ� �����ϰ� �ȴٸ� true�� ��, �����ϸ� false�� ��
	if (file.fail()) //������ fail ������ Ȯ���ϱ� ���� ���
	{
		std::cout << "���� ����" << std::endl;
		return -1;
	}
	std::cout << "�ƹ��۴�" << std::endl;

	std::string str, str2, line;

	//file >> str; // ���Ͼ��� ������ std�� �����Ѵٴ� �ǹ� but �̷����� space, enter���� �� ���� �������� �о��
	file >> str>>str2; // str�� hello�� �о����, str2�� world!�� �о��
	std::cout << str<<" " << str2 << std::endl;

	//while (file >> str >> str2) //Ȧ�������� ¦�������� �˾ƾ��� ������ ������ �о�� �� ����
	//{
	//	std::cout << str << " " << str2 <<std::endl;
	//}


	//while (file >> str >> str2) //Ȧ�������� ¦�������� �˾ƾ��� ������ ������ �о�� �� ����
	//{
	//	std::cout << str << " " << str2 << std::endl;
	//}


	//while (file >> str) 
	//{
	//	std::cout << str << " " << std::endl;
	//}

	std::getline(file, line); // file�� ������ �� �پ� �о�� line�� ����.(enter ����)
	std::cout << line; //������ �ϸ� ���ٸ� �о���� ����� �� �� ����

	while (std::getline(file, line))
	{
		std::cout << line << std::endl;
	}

	return 0;

	int i = 1;
	while (std::getline(file, line)) //for�����δ� ������� Ư���ϱ� ����� �ڵ尡 ��������
	{
		if (i == 2)
			std::cout << line << std::endl;
		i++;
	}
	
	file.close(); // <<������ �ݴ±���� ��


	return 0;
}