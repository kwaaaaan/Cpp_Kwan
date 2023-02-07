////#include <iostream>
////#include <vector> // 포인터로 지정해주지 않을 수 있음
////int main(void)
////{
////	// std::vector<int> v;  
////	// std::vector<int> v(3); --> 크기가 3인 벡터배열로 지정
////	// std::vector<int> v(3,1); --> 크기가 3이고, 범위내의 모든값을 1로 초기화함  
////	// std::vector<int> v = {1,2,3}; --> 크기가 3인 배열로 선언 및 초기화
////	std::vector<int> v = { 1,2,3,4,5 }; // push_back을 이용해서 배열의 크기를 바꿀 수 있음
////	//int num;
////	//std::cin >> num;
////	//std::vector<int> n;
////	//v.assign(num, 1); // --> 동적배열로 할당해줌, num의 크기 및 모든 원소를 1로 할당함
////	//				  // --> std::vector<int> v(num,1)
////	int i = 0;
////	for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	v.push_back(10); //배열의 마지막에 원하는 원소를 추가할 수 있음
////	v.resize(6);				 //v.resize() --> 배열의 크기를 reszie함, 커진 길이만큼 0만큼 초기화 함
////	for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	v.pop_back();
////	for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////
////	std::cout << v.front() << "" << std::endl;
////	std::cout << v.back() << "" << std::endl;
////
////	v.insert(v.begin() + 1, 99); //v.begin()+2 , 99 --> 2번 인덱스의 주소값에 99를 추가함
////	for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////
////	// v.erase(v.begin() + 2); // 2번 인덱스를 삭제
////	v.erase(v.begin() + 3, v.begin()+5); // 3번, 4번(5미만의 값) 인덱스를 삭제
////	for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	{
////		std::cout << v.at(i) << "";
////		//std::cout << v.at(i) << "";
////		//std::cout << v[i] << "";
////	}
////	std::cout << std::endl;
////	//v.clear(); // 배열의 모든 원소를 삭제함
////	//for (i = 0; i < v.size(); i++) // i<v.size() --> 사이즈를 알 수 있게 만들어줌.
////	//{
////	//	std::cout << v.at(i) << "";
////	//	//std::cout << v.at(i) << "";
////	//	//std::cout << v[i] << "";
////	//}
////	//std::cout << std::endl;
////
////	for (int &vv : v) 	//vector를 사용할때에는 for-each문을 사용 가능함
////	{
////		vv = vv + 1;
////		std::cout << vv << "";
////	}
////	std::cout << std::endl;
////
////	for (int vv : v) 	//vector를 사용할때에는 for-each문을 사용 가능함
////	{
////		std::cout << vv << "";
////	}
////
////	return 0;
////}
////
////#include <iostream>
////#include <vector> //2차원 벡터 만들기
////int main(void)
////{
////	int i, j = 0;
////	std::vector<std::vector<int>> v2;
////	v2.assign(3, std::vector<int>(2)); //3 x 2 행렬을 만들거임
////
////	for (i = 0;i<v2.size();i++) // 행의 개수
////	{
////		for (j = 0; j < v2.at(i).size(); j++) // 열의 개수
////		{
////			//std::cout << v2[i][j] << ""; //아래와 같은 코드임, just ad의 유무차이
////			std::cout << v2.at(i).at(j) << "";
////		}
////		std::cout << std::endl;
////	}
////	//for(auto) --> 가능
////
////	for (std::vector<int>vv2 : v2)
////	{
////		for (int vvv2 : vv2)
////		{
////			std::cout << vvv2 << "";
////		}
////		std::cout << std::endl;
////	}
////
////	for (auto vv2 : v2)
////	{
////		for (int vvv2 : vv2)
////		{
////			std::cout << vvv2 << "";
////		}
////		std::cout << std::endl;
////	}
////
////
////	return 0;
////}
//#include <iostream>
//#include <vector> 
//int main(void)
//
//	{
//		int x, y = 0;
//		
//		while (1)
//		{
//			std::cout << "x를 입력하세요 : " << std::endl;
//			std::cin >> x;
//			std::cout << "y를 입력하세요 : " << std::endl;
//			std::cin >> y;
//			if (x > 0 && y > 0) break;
//			else std::cout << "양수를 입력하세요" << std::endl;
//		}
//
//		std::vector<std::vector<int>> v_1;
//		v_1.assign(x, std::vector<int>(y));
//		int a = 1;
//
//		for (int i = 0; i < v_1.size(); i++)
//		{
//			for (int j = 0; j < v_1.size()+1; j++)
//			{
//				v_1[i][j] = a++;
//				std::cout << v_1[i][j];
//			}
//
//			std::cout << std::endl;
//		}
//	
//		
//		
//		/*
//		int a = 1;
//		for (int i = 0; i < x; i++)
//		{
//
//			for (int j = 0; j < y; j++)
//			{
//				arr[i][j] = a++;
//				std::cout << arr[i][j] << " ";
//
//			}
//
//			std::cout << std::endl;
//		}
//
//		for (int i = 0; i < x; i++)
//		{
//			delete[] arr[i];
//		}
//		delete[] arr;
//		*/
//		return 0;
//
//}

//(1) 사용자가 입력한 숫자들을 배열에 담고, 그 수의 합 구하기.
//(2) 출력형태는 사진과 같음.

//#include <iostream>
//#include <vector>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int x = 100;
//	int sum = 0;
//
//
//	//while (1)
//	//{
//	//	std::cout << "숫자를 입력하세요 (exit : 0)";
//	//	std::cin >> x;
//	//	std::vector<std::vector<int>> v1;
//	//	v1.assign(x, std::vector<int>(y));
//
//	//	v1[i][j] = x + v1[i][j];
//	//	std::cout << v1[i][j] << std::endl;
//
//	//	if (x == 0) break;
//
//	//}
//	//
//	//return 0;
//
//	std::vector<int> v;
//
//		if (x != 0)
//		{
//			for (int i = 0; i < v.size(); i++)
//			{
//
//
//				std::cout << "숫자를 입력하세요 (exit : 0) : ";
//				std::cin >> v.at(i);
//				std::cout << v.at(i);
//				sum = sum + v.at(i);
//			}
//
//			std::cout << "입력한 모든 숫자의 합은 : " << sum << std::endl;
//		}
//
//		else 
//		{
//			std::cout << "프로그램이 종료됩니다." << std::endl;
//		}
//
//		return 0;
//}
//#include <iostream>
//#include <vector>
//int main(void)
//{
//	int i = 0;
//	int j = 0;
//	int x = 10;
//	int y = 0;
//	int sum = 0;
//
//	std::vector<int> v;
//
//
//
//	while (1)
//	{
//		std::cout << "숫자를 입력하세요 (exit : 0) : ";
//		std::cin >> x;
//		v.insert(v.begin() + y, x);
//
//		if (x == 0) break;
//	}
//	for (i = 0; i < v.size(); i++)
//	{
//		sum += v[i];
//	}
//
//	std::cout << "입력한 모든 숫자의 합은 : " << sum << std::endl;
//
//	return 0;
//}

//[번외] 실습.배열 실습2 응용!
//*사진은 참고용입니다~.아래 글을 읽고 문제 해결해주세요!
//(1) 몇명의 학생 성적 평균을 구할 지 입력 받기
//(2) 입력받은 학생 수 만큼 성석을 입력받기
//(3) 학생들의 성적 평균 산출하기
//input
//학생의 수를 입력하세요 : 3
//1번째 학생의 성적을 입력하세요 : 10
//2번째 학생의 성적을 입력하세요 : 20
//3번째 학생의 성적을 입력하세요 : 30
//output
//평균 : ? ? ? ? (편집됨)
#include <iostream>
int main(void)
{
	double stud;
	double grade;

	std::cout << "학생은 총 몇명입니까?" << std::endl;
	std::cin >> stud;



	return 0;
}