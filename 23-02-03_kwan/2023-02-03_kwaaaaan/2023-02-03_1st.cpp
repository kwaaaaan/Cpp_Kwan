//// �迭 --> ���� ������� �ϳ��� ������ ������ �� �ִ� ������
////#include <iostream>
////#include <string>
////
////int main(void)
////{
////	std::string friends[2]; //������ ���� �̷������ �ڵ� (������ ����)
////
////	friends[0] = "ȫ�浿"; //���� �� �ʱ�ȭ�� �̷���� (����) --> ������ 0���� ����
////	friends[1] = "������";
////	friends[1] = "������"; // friends�� �迭 �ȿ��� �������� �������� ��.
////
////	//std::string friends[2] = { "ȫ�浿", "������" };
////	
////	std::cout << friends[0];
////	
////	//int nums[3] = { 1, 2, 3 };
////	//std::cout << nums[2] << std::endl;
////	double nums[4] = { 1.2, 3.4, 5.5 };
////	nums[3] = { 2.9 };
////
////
////
////	//friends[2] = { "ȫ�浿", "������" };
////	return 0;
////}
//
//#include <iostream>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	//2���� �迭 for�� ���
//	std::string fruit[2][3] = 
//	{ 
//		{"apple","pinapple", "pear"},
//		{"melon","watermelon", "mango"}
//	};
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++) 
//		{
//			std::cout << fruit[i][j] << std::endl;
//		}
//	}
//	
//	
//	// 1�����迭 for�� ���
//	std::string friends[2] = {"ȫ�浿", "������"};
//	for (i = 0; i < 2; i++)
//	{
//		std::cout << friends[i] << std::endl;
//	}
//	//sizeof(friends); sizeof�ȿ� ���� or type�� �� �� �ְ�, ���ڷ� �Ѱ���... �׸��� �� ������ type�� ũ�⸦ byte������ ���ϰ� ��
//	std::string friends[3] = { "ȫ�浿", "������" };
//	for (i = 0; i < sizeof(friends)/sizeof(std::string); i++) // 'sizeof(friends)/sizeof(std::string) --> sizeof(friends)/sizeof(friends[0])�� �Ȱ���
//		                                                      // sizeof(friends)/sizeof(friends[0])�� 0�� �������� �ȵ�
//															  // �迭�� ���� ������ ������ ���ȣ �ȿ� ���� ���ߵ�
//	{
//		std::cout << friends[i] << std::endl;
//	}
//
//
//
//	for (std::string f: friends) //ó�� for���� ������ "ȫ�浿" �ι�° ������ "������", �迭�� ũ�⸸ŭ�� ����;� ������� ������ for each��
//	{    //string��� auto�� �ᵵ ��
//		std::cout << f << std::endl;
//	}
//
//	for ( auto &t : fruit) //�����͸� ��� ���Ŀ� fruit�� �迭����!
//	{
//		for (auto t2 : t)
//		{
//			std::cout << t2 << std::endl;
//		}
//
//	}
//	std::cout << fruit << std::endl;
//	
//	//std::string fruit[2][3][2] =
//	//{
//	//	{{"",""},{"aaa",""}, {"",""}},
//	//	{{"",""},{"",""}, {"",""}} // --> 3���� �迭
//	//};
//	//std::cout << fruit[0][1][0] << std::endl; //--> aaa�� ����
//	//std::cout << fruit; --> �����Ⱚ(�ּҰ�)����
//	
//	
//
//
//	return 0;
//}