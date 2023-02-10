//02-08 복습!
#include <iostream>
class Character
{
	std::string name;
	int level;
	int item;
public:
	Character(std::string name)
	{
		this->name = name;
		level = 0;
		item = 0;
	}
	void set_name(std::string name)
	{
		this->name = name;
	}
	void level_up()
	{
		level++;
	}
	void item_up()
	{
		item++;
	}
	void item_down()
	{
		if (item <= 0)
		{
			std::cout << "아이템이 없습니다.";
		}
		else
		{
			item--;
		}
	}
	void print_info()
	{
		std::cout << name << ", level : " << level << ". item : " << item << std::endl;
	}

};

int main(void)
{
	std::string  name;
	std::cout << "캐릭터 이름을 입력하세요. : ";
	std::cin >> name;
	Character c(name);

	int control;
	while(1)
	{
		std::cout << "캐릭터 조작 : ";
		std::cin >> control;
		if (control == 0)
		{
			break;
		}
		else if (control == 1)
		{
			std::cout << "변경하실 이름을 입력하시오 : " << std::endl;
			std::cin >> name;
			c.set_name(name);
		}
		else if (control == 2)
		{
			c.level_up();
		}
		else if (control == 3)
		{
			c.item_up();
		}
		else if (control == 4)
		{
				c.item_down();	
		}
		else if (control == 5)
		{
			c.print_info();
		}
		else std::cout << "0-5사이의 값을 입력하시오." << std::endl;
	}
	
	return 0;
}