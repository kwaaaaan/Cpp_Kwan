// 나이를 입력하세요 라는 문구를 출력하고 사용자로부터 숫자를 입력받기
// 입력된 숫자가 1부터 7까지면 "유아", 8부터 13까지면 "초등학생", 14부터 16까지면 중학생, 17부터 19까지는 고등학생, 20 이상이면 성인을 출력
// 나이가 200이상이면, "나이가 너무 많습니다..!" 출력
//
//#include <iostream>
//int main(void)
//{
//	int i;
//	std::cout << "나이를 입력하세요" << std::endl;
//	std::cin >> i;
//
//	if (i >= 200)
//	{
//		std::cout << "나이가 너무 많습니다." << std::endl;
//	}
//	else if (i>=1 && i <= 7)
//	{
//		std::cout<< "유아" << std::endl;
//	}
//	else if (i <= 13)
//	{
//		std::cout<< "초등학생" << std::endl;
//	}
//	else if (i <= 16)
//	{
//		std::cout<< "중학생" << std::endl;
//	}
//	else if (i <= 19)
//	{
//		std::cout<< "고등학생" << std::endl;
//	}
//	else if (i >= 20)
//	{
//		std::cout<< "성인" << std::endl;
//	}
//	else
//	{
//		std::cout << "그런나이는 한국에 없습니다." << std::endl;
//	}
//
//	return 0;
//}

// 이름을 입력하세요라는 문구를 출력하고 사용자로부터 이름을 입력받기
// 홍길동이 입력되면 남자, 성춘향이 입력되면 여자, 그외의 내용이 입력되면 모르겠어요 출력
//
#include <iostream>
int main(void)
{
	std::string a;
	std::string b = "성춘향";
	std::string c = "홍길동";

	std::cout << "이름을 입력하세요" << std::endl;
	std::cin >> a;
	if (a == b)
	{
		std::cout << "여자" << std::endl;
	}

	else if (a == c)
	{
		std::cout << "남자" << std::endl;
	}

	else
	{
		std::cout << "모르겠어요" << std::endl;
	}

	return 0;
}

// 숫자 입력받기,,, 5의 배수이면 "입력한 숫자는 5의 배수입니다."
// 5의 배수가 아니라면 "5의 배수가 아닙니다."
//
//#include <iostream>
//int main(void)
//{
//	int a;
//
//	std::cout << "숫자를 입력하세요" << std::endl;
//	std::cin >> a;
//	//if (a == 0)
//	//{
//	//	std::cout << "입력하신 숫자는 0입니다." << std::endl;
//	//}
//
//	//else if (a % 5 == 0)
//	//{
//	//	std::cout << "5의 배수 입니다." << std::endl;
//	//}
//	//else
//	//{
//	//	std::cout << "5의배수가 아닙니다." << std::endl;
//	//}
//	(a % 5) == 0 ? std::cout << a << "는 5의 배수입니다." : std::cout << a << " 5의 배수가 아닙니다";
//	return 0;
//}

// 두개의 변수와 연산자를 입력받아 계산할 수 있는 프로그램 만들기
//#include <iostream>
//int main(void)
//{
//	int a;
//	int b;
//	char q;
//
//
//	std::cout << "정수를 입력해 주십시오" << std::endl;
//	std::cin >> a;
//	std::cout << "연산자를 정의하여 주십시오" << std::endl;
//	std::cin >> q;
//	std::cout << "두번째 정수를 입력해 주십시오" << std::endl;
//	std::cin >> b;
//	
//	
//	if (q == '+' )
//	{
//		std::cout << "두 숫자의 연산 결과는" << a + b << "입니다.";
//	}
//	else if (q == '-')
//	{
//		std::cout << "두 숫자의 연산 결과는" << a - b << "입니다.";
//	}
//	else if (q == '*')
//	{
//		std::cout << "두 숫자의 연산 결과는" << a * b << "입니다.";
//	}
//	else if (q == '/')
//	{
//		std::cout << "두 숫자의 연산 결과는" << a / b << "입니다.";
//	}
//	else
//	{
//		std::cout << "잘못 입력하셨습니다." << std::endl;
//	}
//
//
//	return 0;
//}