//int�� ������ �����ڸ� ���鶧�� int&, double���� �����ڸ� ���鶧 double& ������ int*�� �����ڸ� ������� int*&
//std::cout --> ȭ�鿡 ���� ���(C����� printf�� ���), std::endl --> "���� ����(c����� \�� ���)"
//}

/*
#include<iostream> //C����� ��� ������ ����ų���� �����͸� ����ؾ߸� ����
				   //C++�� ��� �ٸ� ������ ����� ����Ű�� ������� ���۷����� ����
int change_val(int* p)
{
	*p = 3;

	return 0;
}
int main()
{
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
}
*/
/*
#include<iostream>
int change(int* p) //���۷��� ����
{
	*p = 3;
	return 0;
}
int main()
	{
		int number = 5;
		std::cout << number << std::endl;
		change(&number);
		std::cout << number << std::endl;

	}
*/

#include<iostream>
int main()
{
	int a = 3;
	int& another_a = a;

	another_a = 5;
	std::cout << "a : "<< a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;
}