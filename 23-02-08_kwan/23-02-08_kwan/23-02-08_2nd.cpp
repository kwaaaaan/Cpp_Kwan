//#include <iostream>
//struct position //����ü
//{
//	int x;
//	int y;
//};
//
//
//int main(void)
//{
//	//����� �Ҵ��� ������
//	position p;
//	p.x = 3;
//	p.y = 4;
//	//����� �Ҵ��� ������ 
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

	std::cout << "����, ���� ���̸� �Է��ϼ��� : ";
	std::cin >> a >> h;
	std::cout << "���̴� : " << a * h;

	return 0;
}
