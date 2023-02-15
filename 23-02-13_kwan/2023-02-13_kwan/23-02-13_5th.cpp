//#include<iostream>
//#include<vector>
//
//class Snack
//{
//protected:
//	std::string shape, taste;
//	static int sum;
//public:
//	Snack(std::string shape, std::string taste)
//	{
//		this->shape = shape;
//		this->taste = taste;
//	}
//	static int get_sum()
//	{
//		return sum;
//	}
//};
//
//class Candy : public Snack
//{
//protected:
//	std::string shape, taste;
//public:
//	Candy(std::string taste) : Snack(" ", " ")
//	{
//		this->taste = taste;
//	}
//	void taste()
//	{
//		std::cout << "맛을 입력하시오 : ";
//		std::cin >> taste;
//	}
//};
//
//class Chocolate : public Snack
//{
//protected:
//	std::string shape, taste;
//public:
//	Chocolate(std::string shape) : Snack(" ", " ")
//	{
//		this->shape = shape;
//	}
//	void shape()
//	{
//		std::cout << "모양을 입력하시오 : ";
//		std::cin >> shape;
//	}
//};
//int main(void)
//{
//	int in = 20, i, sum;
//	std::string candy, chocolate, shape, taste;
//	std::string no_of;
//	Chocolate ch();
//	Candy ca;
//
//	Snack s = Snack(" ", " ");
//
//
//	while (in != 0)
//	{
//		{
//			std::cout << "과자바구니에 추가할 간식은? --> 1:사탕 2:초콜릿 0:종료 ";
//			std::cin >> in;
//			if (in == 1)
//			{
//				ca.taste();
//			}
//			else if (in == 2)
//			{
//			}
//			else if (in == 0)
//			{
//				no_of = shape + taste;
//				std::cout << "과자 바구니의 담긴 간식의 개수는" << no_of << "개 입니다." << std::endl;
//			}
//			else
//			{
//				std::cout << "0-2사이 숫자를 입력하시오" << std::endl;
//			}
//		}
//
//		return 0;
//	}
//}

#include <iostream>
#include <vector>

class Snack
{
protected:
	std::string name;
	static int count;
public:
	Snack() 
	{
		count++;
	}
	static int get_count()
	{
		return count;
	}
	virtual void show_info() //자식클래스에서 동적바인딩하기 위해 가상함수로 만듬
	{
		std::cout << name << std::endl;
	}
};
int Snack::count = 0;

class Candy : public Snack
{
	std::string taste;
public:
	Candy(std::string taste)
	{
		this->taste = taste;
		this->name = "사탕";//사탕은 변하지 않음
	}
	void show_info()
	{
		std::cout << taste << "맛" << name << std::endl;
	}

};
class Chocolate : public Snack
{
	std::string shape;
public:
	Chocolate(std::string shape)
	{
		this->shape = shape;
		this->name = "초콜릿";//사탕은 변하지 않음
	}
	void show_info()
	{
		std::cout << shape << "모양" << name << std::endl;
	}
};

int main(void)
{
	std::vector<Snack*> snack_basket;	//원소의 자료형을 넣어주면 됨(모든 클래스를 넣으려고 Snack을 넣음)
	int type;							//가상함수로 쓰기 위해 Snack*(포인터) 사용

	
	while (1)
	{
		std::cout << "과자 바구니에 추가할 간시을 고르시오(1:사탕, 2:초콜릿, 0:종료)" << std::endl;
		std::cin >> type;
		if (type == 1)
		{
			std::string taste;
			std::cout << "맛을 입력하세요";
			std::cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2)
		{
			std::string shape;
			std::cout << "모양을 입력하세요";
			std::cin >> shape;
			snack_basket.push_back(new Candy(shape));
		}
		else if (type == 0)
		{
			break;
		}
		else
		{
			std::cout << "0-2사이 숫자를 입력하시오" << std::endl;
		}
	}
	std::cout << "과자 바구니에 담긴 간식의 개수는"<< Snack::get_count() <<"개 입니다." << std::endl;
	std::cout << "과자 바구니에 담긴 간식 확인하기\n";
	for (Snack* snack : snack_basket)
	{
		snack->show_info();
	}

	return 0;
}