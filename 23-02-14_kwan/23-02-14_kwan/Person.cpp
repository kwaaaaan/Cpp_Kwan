// Person.h에 있는 헤더파일을 구현하기위해 만듬
#include "Person.h"				// #include<iosream>을 갖고오면 무한참조가 일어남 why? --> 이미 Person.h라은 헤더파일에 #include<iostream>이 있기에
					
using std::cout;
using std::endl;

int Person::count = 0;

void Person::static_method()
{
	cout << "스태틱 메소드 테스트" << endl;
}
int Person::get_count()
{
	return count;
}
Person::Person()
{
	this->name = "아무개";
	count++;
}
Person::~Person()
{
	cout << "사람의 소멸자입니다." << endl;
	count--;
}
void Person::info()
{
	cout << "사람입니다." << endl;
}
void Person::set_name(string name)
{
	this->name = name;
}
string Person::get_name()
{
	return name;
}