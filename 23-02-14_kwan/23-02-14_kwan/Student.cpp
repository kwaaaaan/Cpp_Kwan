#include "Student.h"				// #include<iosream>�� ������� ���������� �Ͼ why? --> �̹� Person.h���� ������Ͽ� #include<iostream>�� �ֱ⿡
using std::cout;
using std::endl;

Student :: ~Student() 
{
		cout << "�л��� �Ҹ����Դϴ�." << endl;
}
void Student :: info() 
{
		cout << "�л��Դϴ�." << endl;
}
void Student :: test()
{
		cout << "�л��� test �Լ�" << endl;
}