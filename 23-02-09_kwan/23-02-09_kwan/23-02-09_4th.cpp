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
		std::cout << "³ÐÀÌ : " << this->length * under_long << std::endl;
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
		std::cout << "³ÐÀÌ : " << (this->height * under_long) / 2 << std::endl;
	}
	
};
int main(void)
{
	int height;
	int nof_side;
	int under_long;
	std::cout << "»ç°¢Çü ¹Øº¯±æÀÌ" << std::endl;
	std::cin >> nof_side;
	std::cout << "¹Øº¯ ±æÀÌ" << std::endl;
	std::cin >> under_long;
	Rectangle r(nof_side, under_long);
	std::cout << "»ç°¢Çü ³ÐÀÌ" << std::endl;
	r.area();

	std::cout << "»ï°¢Çü ¹Øº¯±æÀÌ" << std::endl;
	std::cin >> height;
	std::cout << "¹Øº¯ ±æÀÌ" << std::endl;
	std::cin >> under_long;
	Triangle t(height, under_long);
	std::cout << "»ï°¢Çü ³ÐÀÌ" << std::endl;
	t.area();
	return 0;
}