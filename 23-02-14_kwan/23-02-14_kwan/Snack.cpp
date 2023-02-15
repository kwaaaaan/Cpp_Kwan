#include "Snack.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int Snack::count = 0;

	Snack::Snack()
	{
		count++;
	}
	int Snack::get_count()
	{
		return count;
	}
	void Snack::show_info()
	{
		cout << "출력출력" << endl;
	}
