//#include <iostream>
//struct position //구조체
//{
//	int x;
//	int y;
//};
//
//
//int main(void)
//{
//	//선언과 할당을 따로함
//	position p;
//	p.x = 3;
//	p.y = 4;
//	//선언과 할당을 같이함 
//	position p = { 3,4 }; 
//
//	std::cout << p.x << " " << p.y << std::endl;
//
//	return 0;
//}

#include <iostream>
struct rectangle
{
	int width, height;
};

int main(void)
{
	rectangle r;
	double a = 0, h = 0;
	r.width = a;
	r.height = h;

	std::cout << "가로, 세로 길이를 입력하세요 : ";
	std::cin >> a >> h;
	std::cout << "넓이는 : " << a * h;

	return 0;
}
