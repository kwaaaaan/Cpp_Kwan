#include <iostream>
#include "Magic_square.h"
#include <iomanip>
using namespace std;
using std::setw;

Magic_square::Magic_square() 
{
	h = 0;
	w = 0;
}

void Magic_square::input_size() 
{
	while (true) 
	{
		cout << "마방진의 행 혹은 열의 수를 홀수로 입력하세요";
		cout << " : ";
		std::cin >> size;

		if (size % 2 == 1 && size > 0) 
			{ 
				break;
			}

		else if (cin.fail()) 
			{ 
			cin.clear(); 
			cin.ignore(512, '\n');
			}

	}
	w = (size - 1) / 2;
}

void Magic_square::make_array() 
{ 
	ms_array = new int* [size];
	for (int i = 0; i < size; i++) 
	{
		ms_array[i] = new int[size];
	}

	for (int j = 0; j < size; j++) 
	{
		for (int k = 0; k < size; k++) 
		{
			ms_array[j][k] = 0;
		}
	}
}

void Magic_square::access_ms() 
{
	int i = 0;
	do 
	{
		if (h == -1 && w == -1) 
		{
			h = 1;
			w = 0;
		}
		else if (h == -1) 
		{
			h += size;
		}
		else if (w == -1) 
		{
			w += size;
		}

		else if (ms_array[h][w] != 0) 
		{
			h += 2;
			w += 1;
		}

		if (ms_array[h][w] == 0) 
		{
			ms_array[h][w] = i + 1;
		}
		h--;
		w--;
		i++;
	}
	while (i < (size * size));
}

void Magic_square::print_ms() 
{
	for (int i = 0; i < size; i++) 
	{
		for (int j = 0; j < size; j++) 
		{
			cout << setw(3) << ms_array[i][j] << setw(8);
		}
		cout << endl;
	}
}

Magic_square::~Magic_square() 
{
	for (int i = 0; i < size; i++) 
	{
		delete[]ms_array[i];
	}
	delete[]ms_array;
}