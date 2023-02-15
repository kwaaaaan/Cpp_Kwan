// 헤더파일에는 멤버들의 선언부만 남겨둠
#pragma once
#include <iostream>
using std::string;
						//ifndef -> endif까지 문법
#ifndef __PERSON_H__	//'if not define'의 줄임말임 -> __PERSON_H__가 정의되어있지 않다면
#define __PERSON_H__	//__PERSON_H__를 정의한다.(endif가 나오기 전까지)
						//define 정의할때 보통 __**_*__(*대문자)로 많이 씀
class Person 
{
protected:
	string name;
	static int count; // 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
public:
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
}; 

#endif					//endif가 나오기 전까지 정의