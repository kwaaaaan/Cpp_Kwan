// 실습 1 배열 사용해보기
// 1. city라는 배열 변수를 만들고, 5개의 나라 이름을 값으로 지정. 2. for문 혹은 for-each문을 활용하여 city 안의 모든 원소를 출력

// 실습 2 배열 활용하기
// 1. grade라는 배열 변수를 선언하고, 학생 5인의 성적 입력받기. 2. for문 혹은 for-each문을 활용하여 5명의 성적 평균 산출
#include <iostream>
#include <string>
int main(void)
{
	//실습 1
	/*std::string city[5] = {"korea", "america", "japan", "germany", "china"};
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		std::cout << city[i] << std::endl;
	}
	*/

	//실습2

	int i;
	double sum = 0;
	int grade[5] = { 1, 2, 3, 4, 5 };

	for (i = 0; i < 5; i++)
	{
		std::cout << grade[i] << "번 학생" << "의 성적을 입력하세요" << std::endl;
		std::cin >> grade[i];
		sum = sum + grade[i];

	}
	std::cout << "학생들의 평균 점수는" << sum/5 << "입니다" << std::endl;

	return 0;
}