// �迭 --> ���� ������� �ϳ��� ������ ������ �� �ִ� ������
#include <iostream>
#include <string>

int main(void)
{
	std::string friends[2]; //������ ���� �̷������ �ڵ� (������ ����)

	friends[0] = "ȫ�浿"; //���� �� �ʱ�ȭ�� �̷���� (����) --> ������ 0���� ����
	friends[1] = "������";
	friends[1] = "������"; // friends�� �迭 �ȿ��� �������� �������� ��.

	//std::string friends[2] = { "ȫ�浿", "������" };
	
	std::cout << friends[0];
	
	//int nums[3] = { 1, 2, 3 };
	//std::cout << nums[2] << std::endl;
	double nums[4] = { 1.2, 3.4, 5.5 };
	nums[3] = { 2.9 };



	//friends[2] = { "ȫ�浿", "������" };
	return 0;
}

//#include <iostream>
//int main(void)
//{
//	std::string fruit[2][3] = 
//	{ 
//		{"apple","pinapple", "pear"},
//		{"melon","watermelon", "mango"}
//	};
//	/*std::string fruit[2][3][2] =
//	{
//		{{"",""},{"",""}, {"",""}},
//		{{"",""},{"",""}, {"",""}} // --> 3���� �迭
//	};*/ 
//
//	return 0;
//}