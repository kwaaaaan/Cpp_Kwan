// ������Ͽ��� ������� ����θ� ���ܵ�
#pragma once
#include <iostream>
using std::string;
						//ifndef -> endif���� ����
#ifndef __PERSON_H__	//'if not define'�� ���Ӹ��� -> __PERSON_H__�� ���ǵǾ����� �ʴٸ�
#define __PERSON_H__	//__PERSON_H__�� �����Ѵ�.(endif�� ������ ������)
						//define �����Ҷ� ���� __**_*__(*�빮��)�� ���� ��
class Person 
{
protected:
	string name;
	static int count; // ��ü ���� ������ ���� �Ҵ���� �ʰ�, ��� ��ü�� ���� ������ ����.
public:
	static void static_method();
	static int get_count();
	Person();
	virtual ~Person();
	virtual void info();
	void set_name(string name);
	string get_name();
}; 

#endif					//endif�� ������ ������ ����