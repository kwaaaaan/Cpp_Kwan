#include "Student.h"				// #include<iosream>을 갖고오면 무한참조가 일어남 why? --> 이미 Person.h라은 헤더파일에 #include<iostream>이 있기에
using std::cout;
using std::endl;

Student :: ~Student() 
{
		cout << "학생의 소멸자입니다." << endl;
}
void Student :: info() 
{
		cout << "학생입니다." << endl;
}
void Student :: test()
{
		cout << "학생의 test 함수" << endl;
}