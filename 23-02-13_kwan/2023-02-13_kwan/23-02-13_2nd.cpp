#include <iostream>
class Snack
{
protected:
	std::string info;
public:
	std::string get_info()
	{
		return info;
	}
	virtual void name()
	{

	}
};
class Candy : public Snack
{
protected:
	std::string taste;
	int price;
	std::string pd_name;
	std::string pd_cp;
public:
	Candy(std::string info)
	{
		this->info = info;
	}
	void name()
	{
		std::cout <<info<< "�����Դϴ�" << std::endl;
	}
};
class Chocolate : public Snack
{
protected:
	std::string shape;
	int price;
	std::string pd_name;
	std::string pd_cp;
public:
	Chocolate(std::string info)
	{
		this->info = info;
	}
	void name()
	{
		std::cout << info <<"���ݸ��Դϴ�" << std::endl;
	}
};

int main(void)
{
	Snack* snack_basket[4] = { new Candy("����� "), new Candy("������ "), new Chocolate("��� "), new Chocolate("��� ") };
	for (int i = 0; i < 4; i++)
	{
		snack_basket[i] -> name();
	}
	for (int i = 0; i < 4; i++)
	{
		delete snack_basket[i];
	}
	return 0;
}
