// 배열 --> 많은 결과값을 하나의 변수에 저장할 수 있는 선언방법
#include <iostream>
#include <string>

int main(void)
{
	std::string friends[2]; //변수의 선언만 이루어지는 코드 (개수를 지정)

	friends[0] = "홍길동"; //값이 들어가 초기화가 이루어짐 (순서) --> 순서는 0부터 시작
	friends[1] = "성춘향";
	friends[1] = "김정관"; // friends의 배열 안에는 성춘향대신 김정관이 들어감.

	//std::string friends[2] = { "홍길동", "성춘향" };
	
	std::cout << friends[0];
	
	//int nums[3] = { 1, 2, 3 };
	//std::cout << nums[2] << std::endl;
	double nums[4] = { 1.2, 3.4, 5.5 };
	nums[3] = { 2.9 };



	//friends[2] = { "홍길동", "성춘향" };
	return 0;
}

//#include <iostream>
//int main(void)
//{
//	std::string fruit[2][3] = 
//	{ 
//		{"apple","pinapple", "pear"},
//		{"melon","watermelon", "mango"}
//	};
//	/*std::string fruit[2][3][2] =
//	{
//		{{"",""},{"",""}, {"",""}},
//		{{"",""},{"",""}, {"",""}} // --> 3차원 배열
//	};*/ 
//
//	return 0;
//}