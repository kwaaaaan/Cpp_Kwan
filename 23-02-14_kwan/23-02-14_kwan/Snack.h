#pragma once
#include <iostream>
#include <vector>

#ifndef __SNACK_H__
#define __SNACK_H__
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Snack 
{
protected:
	string name;
	static int count;
public:
	Snack();
	static int get_count();
	virtual void show_info();
};

#endif __SNACK_H__