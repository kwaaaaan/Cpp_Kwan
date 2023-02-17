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
		std::cout << "시작은 " << word_before << "입니다." << std::endl;
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
				std::cout << "걸린시간 : " << b;
				break;
			}
			else if (word_before[n - 1] == word_in[0])
			{
				std::cout << word_world << " ";
				word_before += "->" + word_in;
				std::cout << "다음단어를 입력하세요 : ";
			}
			else
			{
				std::cout << "잘못된 단어를 입력하셨습니다.";
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