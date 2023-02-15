#pragma once
#include <iostream>
#include <vector>
#include "Snack.h"

#ifndef __Chocolate_H__
#define __Chocolate_H__

class Chocolate : public Snack
{
	std::string shape;
public:
	Chocolate(string taste);

	void show_info();
};
#endif