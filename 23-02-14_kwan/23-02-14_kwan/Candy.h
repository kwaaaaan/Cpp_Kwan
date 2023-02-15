#pragma once
#include <iostream>
#include <vector>
#include "Snack.h"

#ifndef __Candy_H__
#define __Candy_H__

class Candy : public Snack 
{
	std::string taste;
public:
	Candy(string taste);

	void show_info();
};
#endif