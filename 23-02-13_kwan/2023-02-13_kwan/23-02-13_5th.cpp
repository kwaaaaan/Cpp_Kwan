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
//		std::cout << "���� �Է��Ͻÿ� : ";
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
//		std::cout << "����� �Է��Ͻÿ� : ";
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
//			std::cout << "���ڹٱ��Ͽ� �߰��� ������? --> 1:���� 2:���ݸ� 0:���� ";
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
//				std::cout << "���� �ٱ����� ��� ������ ������" << no_of << "�� �Դϴ�." << std::endl;
//			}
//			else
//			{
//				std::cout << "0-2���� ���ڸ� �Է��Ͻÿ�" << std::endl;
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
	virtual void show_info() //�ڽ�Ŭ�������� �������ε��ϱ� ���� �����Լ��� ����
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
		this->name = "����";//������ ������ ����
	}
	void show_info()
	{
		std::cout << taste << "��" << name << std::endl;
	}

};
class Chocolate : public Snack
{
	std::string shape;
public:
	Chocolate(std::string shape)
	{
		this->shape = shape;
		this->name = "���ݸ�";//������ ������ ����
	}
	void show_info()
	{
		std::cout << shape << "���" << name << std::endl;
	}
};

int main(void)
{
	std::vector<Snack*> snack_basket;	//������ �ڷ����� �־��ָ� ��(��� Ŭ������ �������� Snack�� ����)
	int type;							//�����Լ��� ���� ���� Snack*(������) ���

	
	while (1)
	{
		std::cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1:����, 2:���ݸ�, 0:����)" << std::endl;
		std::cin >> type;
		if (type == 1)
		{
			std::string taste;
			std::cout << "���� �Է��ϼ���";
			std::cin >> taste;
			snack_basket.push_back(new Candy(taste));
		}
		else if (type == 2)
		{
			std::string shape;
			std::cout << "����� �Է��ϼ���";
			std::cin >> shape;
			snack_basket.push_back(new Candy(shape));
		}
		else if (type == 0)
		{
			break;
		}
		else
		{
			std::cout << "0-2���� ���ڸ� �Է��Ͻÿ�" << std::endl;
		}
	}
	std::cout << "���� �ٱ��Ͽ� ��� ������ ������"<< Snack::get_count() <<"�� �Դϴ�." << std::endl;
	std::cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�\n";
	for (Snack* snack : snack_basket)
	{
		snack->show_info();
	}

	return 0;
}