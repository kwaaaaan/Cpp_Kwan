//#include <iostream>
//
//class Rectangle 
//{
//	double width, height;
//	double area;
//
//public:
//	Rectangle(double width, double height)
//	{
//		this->width = width;
//		this->height = height;	
//	}
//
//	double get_area()
//	{
//		return area = width * height;
//	}
//};
//
//int main(void)
//{
//	double a, b;
//	std::cout << "���α��� : ";
//	std::cin >> a;
//	std::cout << "���α��� : ";
//	std::cin >> b;
//
//	Rectangle r = Rectangle(a, b);
//
//
//	std::cout << a << " X " << b << "=" << r.get_area();
//
//	return 0;
//}
#include <iostream>

class Character
{
	std::string name;
	int item;
	int level;
	int in_put;

public:
	Character(std::string name, int itme, int level, int in_put)
	{
		this->name = name;
		this->item = item;
		this->level = level;
		this->in_put = in_put;


	}
	void change_name(std::string name) // 1
	{
		this->name = name;
	}
	void level_up(int level) // 2
	{
		this->level = level + 1;
	}
	void get_item(int item) // 3
	{
		this->item = item + 1;
	}
	void loss_item(int item) // 4
	{
		this->item = item - 1;
	}
	void output_on_consol(int out_put) // 5
	{
		std::cout << name << level << item << std::endl;
	}
	void game_close(int close)
	{
		std::cout << "��������" << std::endl;
	}



};

int main(void)
{
	std::string name; int item = 0; int level = 0; int in_put = 100;
	int i;
	std::cout << "�̸��� �Է��Ͻÿ� : ";
	std::cin >> name;
	Character a = Character(name, item, level, in_put);

	while (in_put!=0)
	{
		if (in_put == 1)
		{
			std::cin >> name;
			void change_name();
		}
		else if (in_put == 2)
		{
			void level_up();
		}
		else if (in_put == 3)
		{
			void get_item();
		}
		else if (in_put == 4)
		{
			void loss_item();
		}
		else if (in_put == 5)
		{
			void output_on_consol();
		}
		else if (in_put == 0)
		{
			void game_close(int close);
		}

		std::cout << "\n1 = �̸� ���� \n2 = level up \n3 = item get \n4 = using item \n5 = �������� \n0 = Exit game" << std::endl;
		std::cin >> in_put;
		std::cout << "\n������� �̸���" << name << "�Դϴ�" << std::endl;
		std::cout << "\n������� ��������" << item << "�Դϴ�" << std::endl;
		std::cout << "\n������� ������" << level << "�Դϴ�" << std::endl;
	}


	return 0;

}