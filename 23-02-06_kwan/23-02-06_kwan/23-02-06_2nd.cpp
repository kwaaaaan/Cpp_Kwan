////#include <iostream>
////#include <vector> // �����ͷ� ���������� ���� �� ����
////int main(void)
////{
////	// std::vector<int> v;  
////	// std::vector<int> v(3); --> ũ�Ⱑ 3�� ���͹迭�� ����
////	// std::vector<int> v(3,1); --> ũ�Ⱑ 3�̰�, �������� ��簪�� 1�� �ʱ�ȭ��  
////	// std::vector<int> v = {1,2,3}; --> ũ�Ⱑ 3�� �迭�� ���� �� �ʱ�ȭ
////	std::vector<int> v = { 1,2,3,4,5 }; // push_back�� �̿��ؼ� �迭�� ũ�⸦ �ٲ� �� ����
////	//int num;
////	//std::cin >> num;
////	//std::vector<int> n;
////	//v.assign(num, 1); // --> �����迭�� �Ҵ�����, num�� ũ�� �� ��� ���Ҹ� 1�� �Ҵ���
////	//				  // --> std::vector<int> v(num,1)
////	int i = 0;
////	for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	v.push_back(10); //�迭�� �������� ���ϴ� ���Ҹ� �߰��� �� ����
////	v.resize(6);				 //v.resize() --> �迭�� ũ�⸦ reszie��, Ŀ�� ���̸�ŭ 0��ŭ �ʱ�ȭ ��
////	for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	v.pop_back();
////	for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	std::cout << v.front() << "" << std::endl;
////	std::cout << v.back() << "" << std::endl;
////
////	v.insert(v.begin() + 1, 99); //v.begin()+2 , 99 --> 2�� �ε����� �ּҰ��� 99�� �߰���
////	for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////
////	// v.erase(v.begin() + 2); // 2�� �ε����� ����
////	v.erase(v.begin() + 3, v.begin()+5); // 3��, 4��(5�̸��� ��) �ε����� ����
////	for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////	//v.clear(); // �迭�� ��� ���Ҹ� ������
////	//for (i = 0; i < v.size(); i++) // i<v.size() --> ����� �� �� �ְ� �������.
////	//{
////	//	std::cout << v.at(i) << "";
////	//	//std::cout << v.at(i) << "";
////	//	//std::cout << v[i] << "";
////	//}
////	//std::cout << std::endl;
////
////	for (int &vv : v) 	//vector�� ����Ҷ����� for-each���� ��� ������
////	{
////		vv = vv + 1;
////		std::cout << vv << "";
////	}
////	std::cout << std::endl;
////
////	for (int vv : v) 	//vector�� ����Ҷ����� for-each���� ��� ������
////	{
////		std::cout << vv << "";
////	}
////
////	return 0;
////}
////
////#include <iostream>
////#include <vector> //2���� ���� �����
////int main(void)
////{
////	int i, j = 0;
////	std::vector<std::vector<int>> v2;
////	v2.assign(3, std::vector<int>(2)); //3 x 2 ����� �������
////
////	for (i = 0;i<v2.size();i++) // ���� ����
////	{
////		for (j = 0; j < v2.at(i).size(); j++) // ���� ����
////		{
////			//std::cout << v2[i][j] << ""; //�Ʒ��� ���� �ڵ���, just ad�� ��������
////			std::cout << v2.at(i).at(j) << "";
////		}
////		std::cout << std::endl;
////	}
////	//for(auto) --> ����
////
////	for (std::vector<int>vv2 : v2)
////	{
////		for (int vvv2 : vv2)
////		{
////			std::cout << vvv2 << "";
////		}
////		std::cout << std::endl;
////	}
////
////	for (auto vv2 : v2)
////	{
////		for (int vvv2 : vv2)
////		{
////			std::cout << vvv2 << "";
////		}
////		std::cout << std::endl;
////	}
////
////
////	return 0;
////}
//#include <iostream>
//#include <vector> 
//int main(void)
//
//	{
//		int x, y = 0;
//		
//		while (1)
//		{
//			std::cout << "x�� �Է��ϼ��� : " << std::endl;
//			std::cin >> x;
//			std::cout << "y�� �Է��ϼ��� : " << std::endl;
//			std::cin >> y;
//			if (x > 0 && y > 0) break;
//			else std::cout << "����� �Է��ϼ���" << std::endl;
//		}
//
//		std::vector<std::vector<int>> v_1;
//		v_1.assign(x, std::vector<int>(y));
//		int a = 1;
//
//		for (int i = 0; i < v_1.size(); i++)
//		{
//			for (int j = 0; j < v_1.size()+1; j++)
//			{
//				v_1[i][j] = a++;
//				std::cout << v_1[i][j];
//			}
//
//			std::cout << std::endl;
//		}
//	
//		
//		
//		/*
//		int a = 1;
//		for (int i = 0; i < x; i++)
//		{
//
//			for (int j = 0; j < y; j++)
//			{
//				arr[i][j] = a++;
//				std::cout << arr[i][j] << " ";
//
//			}
//
//			std::cout << std::endl;
//		}
//
//		for (int i = 0; i < x; i++)
//		{
//			delete[] arr[i];
//		}
//		delete[] arr;
//		*/
//		return 0;
//
//}

//(1) ����ڰ� �Է��� ���ڵ��� �迭�� ���, �� ���� �� ���ϱ�.
//(2) ������´� ������ ����.

//#include <iostream>
//#include <vector>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int x = 100;
//	int sum = 0;
//
//
//	//while (1)
//	//{
//	//	std::cout << "���ڸ� �Է��ϼ��� (exit : 0)";
//	//	std::cin >> x;
//	//	std::vector<std::vector<int>> v1;
//	//	v1.assign(x, std::vector<int>(y));
//
//	//	v1[i][j] = x + v1[i][j];
//	//	std::cout << v1[i][j] << std::endl;
//
//	//	if (x == 0) break;
//
//	//}
//	//
//	//return 0;
//
//	std::vector<int> v;
//
//		if (x != 0)
//		{
//			for (int i = 0; i < v.size(); i++)
//			{
//
//
//				std::cout << "���ڸ� �Է��ϼ��� (exit : 0) : ";
//				std::cin >> v.at(i);
//				std::cout << v.at(i);
//				sum = sum + v.at(i);
//			}
//
//			std::cout << "�Է��� ��� ������ ���� : " << sum << std::endl;
//		}
//
//		else 
//		{
//			std::cout << "���α׷��� ����˴ϴ�." << std::endl;
//		}
//
//		return 0;
//}
//#include <iostream>
//#include <vector>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int x = 10;
//	int y = 0;
//	int sum = 0;
//
//	std::vector<int> v;
//
//
//
//	while (1)
//	{
//		std::cout << "���ڸ� �Է��ϼ��� (exit : 0) : ";
//		std::cin >> x;
//		v.insert(v.begin() + y, x);
//
//		if (x == 0) break;
//	}
//	for (i = 0; i < v.size(); i++)
//	{
//		sum += v[i];
//	}
//
//	std::cout << "�Է��� ��� ������ ���� : " << sum << std::endl;
//
//	return 0;
//}

//[����] �ǽ�.�迭 �ǽ�2 ����!
//*������ ������Դϴ�~.�Ʒ� ���� �а� ���� �ذ����ּ���!
//(1) ����� �л� ���� ����� ���� �� �Է� �ޱ�
//(2) �Է¹��� �л� �� ��ŭ ������ �Է¹ޱ�
//(3) �л����� ���� ��� �����ϱ�
//input
//�л��� ���� �Է��ϼ��� : 3
//1��° �л��� ������ �Է��ϼ��� : 10
//2��° �л��� ������ �Է��ϼ��� : 20
//3��° �л��� ������ �Է��ϼ��� : 30
//output
//��� : ? ? ? ? (������)
#include <iostream>
int main(void)
{
	double stud;
	double grade;

	std::cout << "�л��� �� ����Դϱ�?" << std::endl;
	std::cin >> stud;



	return 0;
}