/* �ּ�ó�� ctrl + k + c , �ּ����� ctrl + k + u
#include<iostream>
*/
/*
int main()
{
	std::cout << "Hello, World!!" << std::endl;
	return 0;
}
//std --> C++ ǥ�� ���̺귯���� ��� �Լ�, ��ü ���� ���ǵ� �̸�����(namespace)
//namespace --> ���ǵ� ��ü�� ���� ���Ҽ����� ���� --> C++������ C���ʹ� �ٸ���
������ �̸��� ��� �����ϱ⿡, ���� �̸��̶� �Ҽӵ� namespace�� �ٸ��ٸ� �ٸ������� ����� �� ����
ex) �̸��� ���� ö�� but �λ�ö��, ����ö���� �ٸ�
ex) // header1.h �� ����
namespace header1 {
int foo();
void bar();
}
// header2.h �� ����
namespace header2 {
int foo();
void bar();
}

#include "header1.h"
namespace header1 {
int func() {
foo(); // �˾Ƽ� header1::foo() �� ����ȴ�.
}
} // namespace header1

#include "header1.h"
namespace header1 {
int func() {
foo(); // �˾Ƽ� header1::foo() �� ����ȴ�.
header2::foo(); // header2::foo() �� ����ȴ�.
}
} // namespace header1

#include "header1.h"
#include "header2.h"
C++ �����ϱ� 18
int func() {
header1::foo(); // header1 �̶� �̸� ������ �ִ� foo �� ȣ��
}
#include "header1.h"
#include "header2.h"
using header1::foo;
int main() {
foo(); // header1 �� �ִ� �Լ��� ȣ��
}
#include "header1.h"
#include "header2.h"
using namespace header1;
int main() {
foo(); // header1 �� �ִ� �Լ��� ȣ��
bar(); // header1 �� �ִ� �Լ��� ȣ��
}

#include "header1.h"
#include "header2.h"
using namespace header1;
int main() {
header2::foo(); // header2 �� �ִ� �Լ��� ȣ��
foo(); // header1 �� �ִ� �Լ��� ȣ��
}

**std::endl; --> ȭ�鿡 ���� �ϳ� ���*/
/*
#include<iostream>
int main()
{
	std::cout << "hi" << std::endl// std::endl --> �׳� �ٹٲ���
		<< "my name kwan "
		<< "psi" << std::endl;
	return 0;
}*/

//������ �̸��� �����Ҷ� int number_of_people; �� ���� �� or NumberOfPeople (X ����)
/* 
 int arr[10];
 int *parr = arr;

 int i;
 int *pi = &i;
 --> �����Ͱ� C���� *,&�� �ϴ°Ͱ� ����
 */
/*
#include<iostream>

int main()
{
	int i,sum=0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	
	{
		std::cout << "���� : " << sum << std::endl;
	}
	return 0;
}
*/
/*
#include<iostream>
int main()
{
	int i = 1, sum = 0;

	while (i <= 10)
	{
		sum += i;
		i++;
	}
	std::cout<< "���� : " << sum <<std::endl;
	return 0;
}*/
/*
#include<iostream>
int main()
{
	int lucky_number = 3;
	std::cout << "��ȣ�� ���߽ÿ�" << std::endl;

	int user_input;
	while (1)
	{
		std::cout << "�Է��Ͻÿ� : ";
		std::cin >> user_input;
		if (lucky_number == user_input)
		{
			std::cout << "������ϴ�." << std::endl;
			break;
		}
		else
		{
			std::cout << "�ٸ� ��ȣ�� �Է��Ͻÿ�." << std::endl;
		}
	}
	return 0;
}*/
// C���� ���� printf�� std::cout<<�� �����ϰ�, scanf�� std::cin>>�� ������
/*#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()

{6
	int user_input;
	cout << "���� ������?" << endl;
	cout << "1. �̸�" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		cout << "Kwan" << endl;
				break;
	case 2:
		cout << "29 ��" << endl;
			break;
	case 3:
		cout << "Male" << endl;
		break;

	default:
		cout << "������ ���ڽ��ϴ�." << endl;
		break;
	}
	return 0;
}*/
/*
#include<iostream>
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
C ������ ��� ������ ����Ű�� ���� �� �ݵ�� �����͸� ����ؾ߸� �߽��ϴ�. �׷��� C++
������ �ٸ� ������ ����� ����Ű�� ������� �� �ٸ� ����� �����ϴµ�, �̸� �ٷ� ������(����
���� - reference) ��� �θ��ϴ�
change_val �Լ��� ���� p �� number �� �ּҰ��� �����Ͽ�, *p �� ���� number �� �����Ͽ�
number �� ���� 3 ���� �ٲپ����ϴ�.
*/
/*
#include<iostream>
int main()
{
	int a = 3;
	int& another_a = a;//&�� �����ڸ� ���Ҷ� ����Ű���� �ϴ� Ÿ�� �ڿ� &����

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;
}*/
/*
#include<iostream>
int main()
{
	int a = 10;
	int &another_a = a;

	int b = 3;
	another_a = b;
	printf("�ڱ��� �ȴ�?\n s2 �ڱ� Happy New Year���� s2");
	return 0;
}*/

