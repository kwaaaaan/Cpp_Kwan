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
		std::cout << "1-3������ ���ڸ� �Է��ϼ��� : ";
		std::cin >> human_in;
		{
			sum = sum + human_in - 1;
			if (human_in == 1)
			{
				std::cout << "����ڰ� �Է��� ���ڴ� : " << sum << " " << std::endl;
			}
			else if (human_in == 2)
			{
				std::cout << "����ڰ� �Է��� ���ڴ� : " << sum - 1 << " " << sum << std::endl;
			}
			else if (human_in == 3)
			{
				std::cout << "����ڰ� �Է��� ���ڴ� : " << sum - 2 << " " << sum - 1 << " " << sum << std::endl;
			}
			else
			{
				std::cout << "�߸��� ���ڸ� �Է��ϼ̽��ϴ�.\n" << std::endl;
			}

			sum = sum + computer_in;
			if (computer_in == 1)
			{
				std::cout << "��ǻ�Ͱ� �Է��� ���ڴ� : " << sum << std::endl;
			}
			else if (computer_in == 2)
			{
				std::cout << "��ǻ�Ͱ� �Է��� ���ڴ� : " << sum - 1 << " " << sum << " " << std::endl;
			}
			else if (computer_in == 3)
			{
				std::cout << "��ǻ�Ͱ� �Է��� ���ڴ� : " << sum - 2 << " " << sum - 1 << " " << sum << std::endl;
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
//		std::cout << "��ǻ�Ͱ� �Է��� ���ڴ� : ";
//	}
//	void srand()
//	{
//		std::srand(time(NULL));										//������ �ƴ϶� �Լ��ȿ� �־������.
//		int num = std::rand();
//		int co_num = num % 4;										//Computer�� 1~3���� �Է�
//
//		for(i=1;i<=31;i++)
//		{
//			void cp_num();
//			{
//				cout << "��ǻ�Ͱ� �θ�����" << endl;
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
//			std::cout << "���� �Է��� ���ڴ� : ";
//		}
//
//		void human_input()
//		{
//			for (i = 1; i <= 31; i++)
//			{
//				void hp_num();
//				{
//					cout << "���� �Է��Ѽ���" << endl;
//					cin >> human_num;
//					{
//						int hp_num = human_num + human_num;
//						cout << human_num;
//					}
//				}
//			}
//		}
//};