// 31 GAME
#include <iostream>
#include <cstdlib>
#include <ctime>
int main(void)
{
	
	int i, human_in, sum=0;
	int call = 0;
	std::srand(time(NULL));
	
	for (sum = 1; sum < 32; sum++)
	{
		int computer_in = rand() % 3 + 1;
		std::cout << "1-3까지의 숫자를 입력하세요 : ";
		std::cin >> human_in;
		{
			sum = sum + human_in - 1;
			if (human_in == 1)
			{
				std::cout << "사용자가 입력한 숫자는 : " << sum << " " << std::endl;
			}
			else if (human_in == 2)
			{
				std::cout << "사용자가 입력한 숫자는 : " << sum - 1 << " " << sum << std::endl;
			}
			else if (human_in == 3)
			{
				std::cout << "사용자가 입력한 숫자는 : " << sum - 2 << " " << sum - 1 << " " << sum << std::endl;
			}
			else
			{
				std::cout << "잘못된 숫자를 입력하셨습니다.\n" << std::endl;
			}

			sum = sum + computer_in;
			if (computer_in == 1)
			{
				std::cout << "컴퓨터가 입력한 숫자는 : " << sum << std::endl;
			}
			else if (computer_in == 2)
			{
				std::cout << "컴퓨터가 입력한 숫자는 : " << sum - 1 << " " << sum << " " << std::endl;
			}
			else if (computer_in == 3)
			{
				std::cout << "컴퓨터가 입력한 숫자는 : " << sum - 2 << " " << sum - 1 << " " << sum << std::endl;
			}
			if (sum == 31)
			{
				break;
			}
		}

	}

}
	
//
//class Computer
//{
//protected:
//	int in_put;
//	int i;
//	int human_num;
//public:
//	Computer()
//	{
//		std::cout << "컴퓨터가 입력한 숫자는 : ";
//	}
//	void srand()
//	{
//		std::srand(time(NULL));										//변수가 아니라서 함수안에 넣어놔야함.
//		int num = std::rand();
//		int co_num = num % 4;										//Computer는 1~3까지 입력
//
//		for(i=1;i<=31;i++)
//		{
//			void cp_num();
//			{
//				cout << "컴퓨터가 부른숫자" << endl;
//				cin >> co_num;
//				{
//					int cp_num = co_num + co_num;
//					cout << cp_num;
//				}
//			}
//		}
//			
//	}
//
//};
//
//class Human
//{
//	protected:
//		int in_put;
//		int i;
//		int human_num;
//	public:
//		Human()
//		{
//			std::cout << "내가 입력할 숫자는 : ";
//		}
//
//		void human_input()
//		{
//			for (i = 1; i <= 31; i++)
//			{
//				void hp_num();
//				{
//					cout << "내가 입력한숫자" << endl;
//					cin >> human_num;
//					{
//						int hp_num = human_num + human_num;
//						cout << human_num;
//					}
//				}
//			}
//		}
//};