#include<iostream>
struct Pos
{
	int x;
	int y;
};
//public, private
class Cat //class�� ������ ������
{
 // ���������� �����ʴ� ��ɾ� , ���������� �ϰ���� ������ private;��� ��ɾ� ���
	std::string name;
	std::string species; 
	int age = 0;
public:
	Cat() // "������"���� << �Լ�(method)��,,, class�� ��ü�� ���鶧 �ٷ� ����� 
	{
		std::cout << age <<"Cat �ν��Ͻ� ����";
	}
	Cat(std::string name)
	{
		this->name = name; //thie->name�� public �ؿ� �ִ� name�� �ҷ���
		std::cout << this->name << std::endl;
	}
	
	void mew()
	{
		std::cout << "\n�߿�";
	}

	void eat()
	{
		std::cout << "\n������ �Դ´�";
	}
	// ������ getter
	std::string get_name()
	{
		return name;
	}	
	std::string get_species()
	{
		return species;
	}
	
	int get_age()
	{
		return age;
	}
	// ������ setter
	void set_name(std::string name)
	{
		this->name = name;
	}
	void set_species(std::string species) 
	{
		this->species = species;
	}
	void set_age(int age) 
	{
		this->age = age;
	}

};
int main(void)
{
	Pos p = { 2, 6 };
	p.x = 5;
	std::string x;
	// �����ڴ� ��ü�� ����⸸ �ϸ� Cat���� �����ڰ� �����
	Cat cat; // Cat << Ŭ���� �̸�, _cat << ��ü,,,
	
	//Cat a("����");
	//std::cin >> x; //�Է��Ұ� ������ٶ�
	//Cat a = Cat(x);
	Cat a = Cat("����");

	int age = a.get_age();
	cat.set_age(5); //age�� 5�� �ٲ�
	cat.age = 5;

	Cat cat_2;
	std::cout << cat.age << " " << cat_2.age;

	a.mew();
	a.eat();

	//std::string name = a.name
	std::string name = a.get_name();

	return 0;
}
//�������°� getter, �����ϴ°� setter