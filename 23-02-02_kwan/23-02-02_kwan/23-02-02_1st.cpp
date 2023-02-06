//#include <iostream>
//int main(void)
//
//{
//	//int i = 0;
//	/*for (i = 0; i < 100; i++) 
//	{
//		std::cout << i+1. <<"안녕하세요" << std::endl;
//	}
//
//	for (i = 100; i > 0; i--)
//	{
//		std::cout << i <<"." << "안녕하세요" << std::endl;
//	}*/
//
//	////while문은 코드를 끝내고싶지 않을때 사용
//	//std::cin >> i;
//	//while (i!=0) //사용자가 어떠한 값을 입력했을 떄 끝내고 싶을 경우에 사용
//	//{
//	//	i++;
//	//	std::cout << i << ". 안녕하세요" << std::endl;
//	//}
//
//	/*int i = 100;
//	while (i < 100)
//	{
//		std::cout << i + 1 << ". 안녕하세요" << std::endl;
//	}
//	do
//	{
//		std::cout << i + 1 << ". 안녕하세요...." << std::endl;
//	} while (i < 100);
//
//	return 0;
//	*/
//	
//}
//
//#include <iostream>
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		std::cout << 5 * i << std::endl;
//	}
//	for (i = 1; i <= 9; i++)
//	{
//		std::cout <<"---" << i << "단---" << std::endl;
//		for (j = 1; j <= 9; j++)
//		{
//			std::cout <<  i * j << std::endl;
//
//		}
//	}
//
//	return 0;
//}
//
//#include <iostream>
//int main(void)
//{
//	int i=0;
//	int in;
//	int out = 0;
//
//	std::cout << "숫자를 입력하시오" << std::endl;
//	std::cin>>in;
//
//	std::cout << "1부터" << in << "까지의 합은" << std::endl;
//	for (i = 0; i <= in; i++)
//	{	
//		out = out + i;
//	}
//	std::cout << out << "입니다." << std::endl;
//	
//	return 0;
//}
//
// 
 
//// 
//#include <iostream>
//int main(void)
//{
//	int i=0;
//	int j =0;
////	/*std::cout <<  "5단" << std::endl;
////	while (i <= 9)
////	{
////		i++;
////		std::cout << i * 5 << std::endl;
////
////	}
////	*/
//
//	while (i < 9)
//	{
//		i++;
//		j = 0;
//		std::cout<<"----------" << i << "단----------" << std::endl;
//		
//		
//		while (j < 9)
//		{
//			j++;
//			std::cout << i * j << std::endl;
//		}
//		
//
//	}
//
//	return 0;
//
//}
//#include <iostream>
//int main(void)
//{
//	std::cout << "1부터 n까지의 합 구하기" << std::endl;
//	int i = 0;
//	int in = 0;
//	int out = 0;
//	std::cout << "양의정수를 입력하시오" << std::endl;
//	std::cin >> in;
//	while (i< in)
//	{
//		i = i + 1;
//		out = i + out;
//	}
//	std::cout << "1부터 " << i << "까지의 합은" << out << "입니다" << std::endl;
//
//	return 0;
//}

//
//#include <iostream>
//int main(void)
//{
//	int i = 80;
//	int sum = 0;
//	
//	while(i != 0)
//	{
//		std::cout << "숫자를 입력하세요 (0:exit) : ";
//		std::cin >> i;
//		sum = sum + i;
//	}
//
//	std::cout << "사용자가 입력한 수의 합은 : " << sum << std::endl;
//	return 0;
////}
//
//#include <iostream>
//int two_sum_return(int p1, int p2)
//{
//	int result_sum = 0;
//	result_sum = p1 + p2;
//	return result_sum;
//}
//int two_minus_return(int m1, int m2)
//{
//	int result_minus = 0;
//	if (m1 > m2)
//	{
//		result_minus = m1 - m2;
//	}
//	else
//	{
//		result_minus = m2 - m1;
//	}
//	return result_minus;
//
//}
//int two_cross_return(int c1, int c2)
//{
//	int result_cross = 0;
//	result_cross = c1 * c2;
//	return result_cross;
//}
//
//double two_divide_return(int d1, int d2)
//{
//	double result_divide = 0;
//	result_divide =  (double)d1 / (double)d2;
//	return result_divide;
//}
//
//int main(void)
//{
//	int result_sum = two_sum_return(1, 2);
//	std::cout << result_sum << std::endl;
//	
//	int result_minus = two_minus_return(8, 13);
//	std::cout << result_minus << std::endl;
//	
//	int result_cross = two_cross_return(8, 6);
//	std::cout << result_cross << std::endl;
//
//	double result_divide = two_divide_return(9, 4);
//	std::cout << (double)result_divide << std::endl;
//
//}


////
//#include <iostream>	/*[번외] 실습.하나의 정수를 매개변수로 받아서
//					그 수가 짝수이면 "짝수", 홀수이면 "홀수" 라고 출력하는 함수 작성*/
////even, oddnumber
//void eo_number(int eo)
//{
//	int result_eo = 0;
//
//	if (eo % 2 == 0)
//	{
//		std::cout << "짝수" << std::endl;
//	}
//	else
//	{
//		std::cout << "홀수" << std::endl;
//	}
//	//return result_eo;
//}
//int main(void)
//{
//
//	eo_number(6); //함수를 호출할때는 함수명과 괄호를 같이 써주면 됨
//	int i;
//	std::cin >> i;
//	//eo_number(i);
//	//std::cout << eo_number(i) <<std::endl;
//
//
//	return 0;
//}
// 콘솔에 반환하려면 return값이 없어도된다.
// 함수에서 만든 변수를 메인함수에서 사용하고 싶을때 return을 사용하다.

#include <iostream>//[번외] 실습. 세 개의 수를 매개변수로 받아서 그중 가장 큰 수를 반환하는 함수 작성.
void three_number(int f, int s, int t)
{
	if (f > s && f > t)
	{
		std::cout << f << std::endl;
	}
	else if (s > f && s > t)
	{
		std::cout << s << std::endl;
	}
	else
	{
		std::cout << t << std::endl;
	}
}

int main(void)
{
	int i = 0;
	int j = 0; 
	int k = 0;
	std::cin >> i >> j >> k;
	three_number(i, j, k);
	return 0;
}