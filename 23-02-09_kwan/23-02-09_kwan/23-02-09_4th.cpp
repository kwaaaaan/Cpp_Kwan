#include <iostream>
class Shape
{
protected:
	int nof_side;
	int under_long;
	int width;
	int height;
public:
	Shape(int nof_side, int under_long)
	{
		this->nof_side = nof_side;
		this->under_long = under_long;
	}
	void set_print_info()
	{
		std::cout << nof_side << under_long << std::endl;
	}
	
};
class Rectangle : public Shape
{
protected:
	int length;
public:
	Rectangle(int length, int under_long) : Shape(4, under_long)
	{
		this->length = length;
	}

	void area()
	{
		std::cout << "���� : " << this->length * under_long << std::endl;
	}
};

class Triangle : public Shape
{
protected:
	int height;
public:
	Triangle(int height, int under_long) : Shape(3,under_long)
	{
		this->height = height;
	}
	void area()
	{
		std::cout << "���� : " << (this->height * under_long) / 2 << std::endl;
	}
	
};
int main(void)
{
	int height;
	int nof_side;
	int under_long;
	std::cout << "�簢�� �غ�����" << std::endl;
	std::cin >> nof_side;
	std::cout << "�غ� ����" << std::endl;
	std::cin >> under_long;
	Rectangle r(nof_side, under_long);
	std::cout << "�簢�� ����" << std::endl;
	r.area();

	std::cout << "�ﰢ�� �غ�����" << std::endl;
	std::cin >> height;
	std::cout << "�غ� ����" << std::endl;
	std::cin >> under_long;
	Triangle t(height, under_long);
	std::cout << "�ﰢ�� ����" << std::endl;
	t.area();
	return 0;
}