//int형 변수의 참조자를 만들때는 int&, double형의 참조자를 만들때 double& 심지어 int*의 참조자를 만드려면 int*&
//std::cout --> 화면에 무언갈 출력(C언어의 printf와 비슷), std::endl --> "한줄 엔터(c언어의 \와 비슷)"
//}

/*
#include<iostream> //C언어의 경우 변수를 가리킬때는 포인터를 사용해야만 했음
				   //C++의 경우 다른 변수나 상수를 가리키는 방법으로 레퍼런스가 있음
int change_val(int* p)
{
	*p = 3;

	return 0;
}
int main()
{
	int number = 5;

	std::cout << number << std::endl;
	change_val(&number);
	std::cout << number << std::endl;
}
*/
/*
#include<iostream>
int change(int* p) //레퍼런스 선언
{
	*p = 3;
	return 0;
}
int main()
	{
		int number = 5;
		std::cout << number << std::endl;
		change(&number);
		std::cout << number << std::endl;

	}
*/

#include<iostream>
int main()
{
	int a = 3;
	int& another_a = a;

	another_a = 5;
	std::cout << "a : "<< a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;
}