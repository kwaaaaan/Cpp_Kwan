#include <iostream>
int main(void)
{
	int com_in = 0, hu_in = 0, num = 0, sum = 0;


	while (num != 31)
	{
		std::cout << "\n숫자를 입력하시오(1~3) : " <<std::endl;
		std::cin >> hu_in;

		sum = num+1;
		for (int i = sum; i < hu_in + sum; i++)
		{
			std::cout << i << " ";
			num++;
			if (i >= 31)
			{
				std::cout << "\n컴퓨터의 승리" << std::endl;
				break;
			}
		}
		if (sum == 31)
		{
			std::cout << std::endl;
			break;
		}

		sum = num;
		std::srand(time(NULL));
		com_in = rand() % 3 + 1;
		std::cout << "\n컴퓨터가 입력한 숫자는 : " <<std::endl;
		for (int j = sum + 1; j <= com_in + sum; j++)
		{
			std::cout << j << " ";
			num++;
			if (j >= 31)
			{
				std::cout << "\n사용자의 승리" << std::endl;
				break;
			}
		}
		if (sum == 31)
		{
			std::cout << std::endl;
			break;
		}
	}


	return 0;
}