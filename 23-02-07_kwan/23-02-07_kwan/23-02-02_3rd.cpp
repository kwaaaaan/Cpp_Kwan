////����ڿ��� 3���� ȸ���� ���� �̸� ��й�ȣ �Է¹ް�, �Էµ� ������ member.txt�� ���
////member.txt�� ����� ȸ����� ���(���� �б� ���)
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
//		std::cout << "���� ����" << std::endl;
//		return -1; //0�� ������ �ǹ�
//	}
//
//
//	else
//	{
//
//		for (int i = 1; i <= 3; i++)
//		{
//			std::cout << i << "��° ȸ�� : ";
//			std::cin >> name >> pw;
//			s = s + name + pw + "\n";
//		}
//
//	}
//	std::cout << "--------- ȸ�� ��� ���� �б�----------" << std::endl;
//	std::cout << s << std::endl;
//	file << s;
//	std::ofstream out("member.txt", std::ios::out | std::ios::trunc);
//
//	return 0;
//}

// ����ڿ��� "�̸��� �Է��ϼ���.", "��й�ȣ�� �Է��ϼ���"��� �޼��� ����ѵ� �̸�, ��й�ȣ �Է¹ޱ�
//member.txt���� �� �پ� "�̸�"�� "���"�� �˻��Ͽ� �α��� ���� �� "�α��� ����", ���� "�α��� ����" ���
// ���⼭ member.txt�� �ǽ����� ���� ȸ�����

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
//	std::cout << "�̸��� �Է��ϼ���: ";
//	std::cin >> name;
//	std::cout << "����� �Է��ϼ���: ";
//	std::cin >> pw;
//
//	while (file >> str_1 >> str_2) 
//	{
//		if (str_1 == name)
//		{
//			if (str_2 == pw)
//			{
//				std::cout << "�α��� ����" << std::endl;
//			}
//
//			else
//			{
//			std::cout << "�α��� ����" << std::endl;
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


	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;
	std::cout << "����� �Է��ϼ���: ";
	std::cin >> pw;

	while (file >> str_1 >> str_2) 
	{
		if (str_1 == name)
		{
			if (str_2 == pw)
			{
				std::cout << "�α��� ����" << std::endl;
				{
					std::cout << "��ȭ��ȣ�� �Է����ּ���" << std::endl;
					std::cin >> phone_number;
					file_2 << name << " " << phone_number;
					std::ofstream file_2("member_tel.txt", std::ios::out | std::ios::app);
				}

			}
			else
			{
			std::cout << "�α��� ����" << std::endl;
			}
		}
	}
	return 0;
}