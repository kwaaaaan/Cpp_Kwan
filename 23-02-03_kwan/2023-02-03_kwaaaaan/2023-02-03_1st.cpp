//// 배열 --> 많은 결과값을 하나의 변수에 저장할 수 있는 선언방법
////#include <iostream>
////#include <string>
////
////int main(void)
////{
////	std::string friends[2]; //변수의 선언만 이루어지는 코드 (개수를 지정)
////
////	friends[0] = "홍길동"; //값이 들어가 초기화가 이루어짐 (순서) --> 순서는 0부터 시작
////	friends[1] = "성춘향";
////	friends[1] = "김정관"; // friends의 배열 안에는 성춘향대신 김정관이 들어감.
////
////	//std::string friends[2] = { "홍길동", "성춘향" };
////	
////	std::cout << friends[0];
////	
////	//int nums[3] = { 1, 2, 3 };
////	//std::cout << nums[2] << std::endl;
////	double nums[4] = { 1.2, 3.4, 5.5 };
////	nums[3] = { 2.9 };
////
////
////
////	//friends[2] = { "홍길동", "성춘향" };
////	return 0;
////}
//
//#include <iostream>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	//2차원 배열 for문 사용
//	std::string fruit[2][3] = 
//	{ 
//		{"apple","pinapple", "pear"},
//		{"melon","watermelon", "mango"}
//	};
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++) 
//		{
//			std::cout << fruit[i][j] << std::endl;
//		}
//	}
//	
//	
//	// 1차원배열 for문 사용
//	std::string friends[2] = {"홍길동", "성춘향"};
//	for (i = 0; i < 2; i++)
//	{
//		std::cout << friends[i] << std::endl;
//	}
//	//sizeof(friends); sizeof안에 변수 or type이 들어갈 수 있고, 인자로 넘겨줌... 그리고 들어간 변수나 type의 크기를 byte단위로 구하게 됨
//	std::string friends[3] = { "홍길동", "성춘향" };
//	for (i = 0; i < sizeof(friends)/sizeof(std::string); i++) // 'sizeof(friends)/sizeof(std::string) --> sizeof(friends)/sizeof(friends[0])과 똑같음
//		                                                      // sizeof(friends)/sizeof(friends[0])의 0은 없어지면 안됨
//															  // 배열을 갖다 쓸때는 무조건 대괄호 안에 값이 들어가야됨
//	{
//		std::cout << friends[i] << std::endl;
//	}
//
//
//
//	for (std::string f: friends) //처음 for문을 돌때는 "홍길동" 두번째 돌때는 "성춘향", 배열의 크기만큼만 돌고싶어 만들어진 문법인 for each문
//	{    //string대신 auto를 써도 됨
//		std::cout << f << std::endl;
//	}
//
//	for ( auto &t : fruit) //포인터를 배운 이후에 fruit은 배열명임!
//	{
//		for (auto t2 : t)
//		{
//			std::cout << t2 << std::endl;
//		}
//
//	}
//	std::cout << fruit << std::endl;
//	
//	//std::string fruit[2][3][2] =
//	//{
//	//	{{"",""},{"aaa",""}, {"",""}},
//	//	{{"",""},{"",""}, {"",""}} // --> 3차원 배열
//	//};
//	//std::cout << fruit[0][1][0] << std::endl; //--> aaa가 나옴
//	//std::cout << fruit; --> 쓰레기값(주소값)나옴
//	
//	
//
//
//	return 0;
//}