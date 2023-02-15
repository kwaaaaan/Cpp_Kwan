//Random함수 만들기, 난수생성
//로또번호 추첨하기 같은거 만들 수 있음
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	int n = 0;
	int lotto_ary[6] = {};

	std::srand(time(NULL));						//현재시간을 초단위로 갖고오게 함, NULL을 절대 같은숫자가 나올 수 없음
	//std::srand(3);							//srand를 추가하여 들어가는 숫자마다 Random하게 다른숫자가 나오게 하기
	int num = std::rand();						//Random 숫자 나오게 하기 but 처음에 나온 숫자가 끝까지 나온다
	
	//0-25사이의 난수를 출력					//0~25사이의 난수를 출력하고 싶을때
	int random_num = num % 25 + 1;				// 25로 나눈 나머지는 0~24까지 나오게 되고, 거기다 +1을 해주면 0-25사이의 난수가 나오게됨
												// --> 원하는 난수를 만들 수 있는 방법
	//std::cout << num << std::endl;
	//std::cout << random_num << std::endl;

	for (int i = 0; i < 6; i++)
	{
		lotto_ary[i] = num % 46;
		int a = lotto_ary[i];
		for (int j = 0; j < 6; j++)
		{
			if (lotto_ary[j] == a)
			{
				i--;
			}
			std::cout << lotto_ary[i] << std::endl;
		}


	}
	return 0;
}