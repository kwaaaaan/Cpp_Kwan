#include <iostream>
#include <ctime>
class Word_chain
{
protected:
	int a = 0, i = 0, j = 0;
	std::string word_before = "apple";
	std::string word_in;
	double b = 0;
public:
	void game()
	{
		std::cout << "������ " << word_before << "�Դϴ�." << std::endl;
		clock_t start_time = clock();
		while (1)
		{
			clock_t end_time = clock();
			double b = (end_time - start_time) / CLOCKS_PER_SEC;
			std::cin >> word_in;
			int n = word_before.size();
			std::string word_world = word_before + "->" + word_in;
			if (b > 10)
			{
				std::cout << "�ɸ��ð� : " << b;
				break;
			}
			else if (word_before[n - 1] == word_in[0])
			{
				std::cout << word_world << " ";
				word_before += "->" + word_in;
				std::cout << "�����ܾ �Է��ϼ��� : ";
			}
			else
			{
				std::cout << "�߸��� �ܾ �Է��ϼ̽��ϴ�.";
			}
		}
	}
};
int main(void)
{
	Word_chain word_chain;
	word_chain.game();
	return 0;
}