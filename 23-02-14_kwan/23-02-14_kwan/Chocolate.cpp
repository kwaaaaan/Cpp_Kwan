#include "Chocolate.h"
#include "Snack.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

Chocolate::Chocolate(string shape)
{
	this->shape = shape;
	this->name = "���ݸ�";
}

void Chocolate::show_info()
{
	cout << shape << "��� " << name << endl;
}
