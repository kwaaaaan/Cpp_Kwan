#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
class Lotto
{
	
};

class Make_num : public Lotto
{
protected:
	int i, count = 0;
	int lotto_num[6];
public:
	int make_num()
	{
		srand(time(NULL));
		for (i = 0; i < 6; i++)
		{
			lotto_num[i] = (rand() % 25) + 1;
			std::cout << lotto_num[i] << " ";
			return lotto_num[i];
		}
	}
};

class Compare : public Make_num
{
	int user_in[6];
	int i = 0;
public:
	Make_num M;	
	void compare()
	{
		std::cout << "번호를 입력하세요 : ";
		for (i = 0; i < 6; i++)
		{
			std::cin >> user_in[i];
			if (M.make_num() == user_in[i])
			{
				std::cout << i + 1 << "번째 로또 번호는 : " << "정답!\n";
			}
			else
			{
				std::cout << i + 1 << "번째 로또 번호는 : " << "땡!\n";
			}
		}
		
	}
};

int main(void)
{
	int i;
	Make_num m;
	Compare c;
	c.compare();

	return 0;
}