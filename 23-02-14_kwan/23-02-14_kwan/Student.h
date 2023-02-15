#pragma once
#include <iostream>
#include "Person.h"

#ifndef __STUDENT_H__ // if not define : __PERSON_H__ 가 정의되어 있지 않다면
#define __STUDENT_H__ // __PERSON_H__를 정의한다. #endif가 나오기 전까지의 내용을
class Student : public Person {
	std::string stu_id;
public:
	~Student();
	void info();
	void test();
};
#endif