#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
class Make_num
{
protected:
	int i, count = 0;
public:
	int lotto_num[6] = {};
	void make_num()
	{
		srand(time(NULL));
		for (i = 0; i < 6; i++)
		{
			lotto_num[i] = (rand() % 25) + 1;
			for (count = 0; count < i; count++)
			{
				if (lotto_num[i] == lotto_num[count])
				{
					i--;
				}
			}
			std::cout << lotto_num[i] << " ";
		}
	}
};

class Choose_num : public Make_num
{
	int i, j = 0;
public:
	int user_in[6];
	Make_num M;
	void choose()
	{
		for (i = 0; i < 6; i++)
		{
			std::cout << i+1 << "번째 번호를 입력하세요 : ";
			std::cin >> user_in[i];
			if (user_in[i] > 25 || user_in[i] < 1)
			{
				std::cout << "1~25사이의 숫자를 입력하세요";
				i--;
			}
			for (j = 0; j < i; j++)
			{
				if (user_in[i] == user_in[j])
				{
					std::cout << "입력하셨던 숫자입니다.";
					i--;
				}
			}
		}

	}
};

class Compare : public Choose_num
{
protected:
	int i,j = 0;
	int lotto_out=7;
public:
	Choose_num c;
	void compare()
	{
		c.choose();
		for (i = 0; i < 6; i++)
		{
			if (lotto_num[i] == user_in[i])
			{
				lotto_out -= 1;
			}
			
		}
		M.make_num();
		std::cout << lotto_out << "등 입니다." << std::endl;
	}
};

int main(void)
{
	Compare c;
	c.compare();

	return 0;
}