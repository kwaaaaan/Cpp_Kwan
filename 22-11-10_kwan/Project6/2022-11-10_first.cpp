/* 주석처리 ctrl + k + c , 주석해제 ctrl + k + u
#include<iostream>
*/
/*
int main()
{
	std::cout << "Hello, World!!" << std::endl;
	return 0;
}
//std --> C++ 표준 라이브러리의 모든 함수, 객체 등의 정의된 이름공간(namespace)
//namespace --> 정의된 객체에 대해 어디소속인지 지정 --> C++에서는 C언어와는 다르게
동일한 이름이 사용 가능하기에, 같은 이름이라도 소속된 namespace가 다르다면 다른것으로 취급할 수 있음
ex) 이름이 같은 철수 but 부산철수, 서울철수는 다름
ex) // header1.h 의 내용
namespace header1 {
int foo();
void bar();
}
// header2.h 의 내용
namespace header2 {
int foo();
void bar();
}

#include "header1.h"
namespace header1 {
int func() {
foo(); // 알아서 header1::foo() 가 실행된다.
}
} // namespace header1

#include "header1.h"
namespace header1 {
int func() {
foo(); // 알아서 header1::foo() 가 실행된다.
header2::foo(); // header2::foo() 가 실행된다.
}
} // namespace header1

#include "header1.h"
#include "header2.h"
C++ 시작하기 18
int func() {
header1::foo(); // header1 이란 이름 공간에 있는 foo 를 호출
}
#include "header1.h"
#include "header2.h"
using header1::foo;
int main() {
foo(); // header1 에 있는 함수를 호출
}
#include "header1.h"
#include "header2.h"
using namespace header1;
int main() {
foo(); // header1 에 있는 함수를 호출
bar(); // header1 에 있는 함수를 호출
}

#include "header1.h"
#include "header2.h"
using namespace header1;
int main() {
header2::foo(); // header2 에 있는 함수를 호출
foo(); // header1 에 있는 함수를 호출
}

**std::endl; --> 화면에 엔터 하나 출력*/
/*
#include<iostream>
int main()
{
	std::cout << "hi" << std::endl// std::endl --> 그냥 줄바꿈임
		<< "my name kwan "
		<< "psi" << std::endl;
	return 0;
}*/

//변수의 이름을 지정할때 int number_of_people; 와 같이 함 or NumberOfPeople (X 권장)
/* 
 int arr[10];
 int *parr = arr;

 int i;
 int *pi = &i;
 --> 포인터가 C에서 *,&이 하는것과 같음
 */
/*
#include<iostream>

int main()
{
	int i,sum=0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	
	{
		std::cout << "합은 : " << sum << std::endl;
	}
	return 0;
}
*/
/*
#include<iostream>
int main()
{
	int i = 1, sum = 0;

	while (i <= 10)
	{
		sum += i;
		i++;
	}
	std::cout<< "합은 : " << sum <<std::endl;
	return 0;
}*/
/*
#include<iostream>
int main()
{
	int lucky_number = 3;
	std::cout << "번호를 맞추시오" << std::endl;

	int user_input;
	while (1)
	{
		std::cout << "입력하시오 : ";
		std::cin >> user_input;
		if (lucky_number == user_input)
		{
			std::cout << "맞췄습니다." << std::endl;
			break;
		}
		else
		{
			std::cout << "다른 번호를 입력하시오." << std::endl;
		}
	}
	return 0;
}*/
// C언어에서 사용된 printf가 std::cout<<로 대응하고, scanf가 std::cin>>로 대응됨
/*#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int main()

{6
	int user_input;
	cout << "나의 정보는?" << endl;
	cout << "1. 이름" << endl;
	cout << "2. 나이" << endl;
	cout << "3. 성별" << endl;
	cin >> user_input;

	switch (user_input)
	{
	case 1:
		cout << "Kwan" << endl;
				break;
	case 2:
		cout << "29 살" << endl;
			break;
	case 3:
		cout << "Male" << endl;
		break;

	default:
		cout << "없으면 들어가겠습니다." << endl;
		break;
	}
	return 0;
}*/
/*
#include<iostream>
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
C 언어에서는 어떠한 변수를 가리키고 싶을 땐 반드시 포인터를 사용해야만 했습니다. 그런데 C++
에서는 다른 변수나 상수를 가리키는 방법으로 또 다른 방식을 제공하는데, 이를 바로 참조자(레퍼
런스 - reference) 라고 부릅니다
change_val 함수의 인자 p 에 number 의 주소값을 전달하여, *p 를 통해 number 를 참조하여
number 의 값을 3 으로 바꾸었습니다.
*/
/*
#include<iostream>
int main()
{
	int a = 3;
	int& another_a = a;//&는 참조자를 정할때 가리키고자 하는 타입 뒤에 &붙임

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;

	return 0;
}*/
/*
#include<iostream>
int main()
{
	int a = 10;
	int &another_a = a;

	int b = 3;
	another_a = b;
	printf("자기이 안뇽?\n s2 자기 Happy New Year에옹 s2");
	return 0;
}*/

