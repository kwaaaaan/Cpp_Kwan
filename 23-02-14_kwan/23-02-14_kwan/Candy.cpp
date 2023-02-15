#include "Candy.h"
#include "Snack.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

	Candy::Candy(string taste)
	{
		this->taste = taste;
		this->name = "ªÁ≈¡";
	}

	void Candy::show_info() 
	{
		cout << taste << "∏¿ " << name << endl;
	}
