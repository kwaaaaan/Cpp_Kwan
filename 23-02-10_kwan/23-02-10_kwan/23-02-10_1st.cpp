//#include <iostream>
//class Person
//{
//protected:
//	std::string name;
//	std::string position;
//public:
//	 void test() // virtual�� ���༭ ����ȭ�� �Ѵ����� �ؿ� new Student�� p200->test�� �ѱ�� ��� ����
//	{
//		std::cout << "Person�� �׽�Ʈ �Լ� �Դϴ�." << std::endl;
//	}
//	 std::string get_position()
//	 {
//		 return position;
//	 }
//	 //void get_position() getter �Ⱦ��� ���
//	 //{
//		// std::cout << position;
//	 //}
//};
//class Student : public Person
//{
//protected:
//	std::string stu_id;
//public:
//	void aaa() {}
//	Student(std::string position)
//	{
//		this->position = position;
//	}
//	void test() // main�Լ����� ������ ������ �Ҵ��� �ʿ��ϱ� ������ ���߿� ��￹��
//	{
//		std::cout << "Student�� �׽�Ʈ �Լ� �Դϴ�." << std::endl;
//	}
//};
//class Instructor : public Person
//{
//public:
//	Instructor(std::string position)
//	{
//		this->position = position;
//	}
//};
//
//int main(void)
//{
//	//Person p; // �ڷ��� ������ �����ϸ� �ǰ�, Person�� �������� ������� ��ü������
//	Person p = Person(); // �̰� ������ ȣ����
//	p.test(); //Person�� �׽�Ʈ�Լ��� ����
//
//	//Person p2 = Student(); //Student �����ڸ� ȣ���ؼ� �ν��Ͻ��� �������.
//	//p2.test(); // Stu
//	////p2.aaa();
//
//	Person p3[4] = { Instructor("����"), Student("�л�1"), Student("�л�2"), Student("�л�3") };
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << p3[i].get_position() << std::endl; //getter�� ���Ϲ������� �����
//	}
//	//Person* p200 = new Student();
//	//p200->test();
//	return 0;
//}
// up-casting, ������ ����
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
};

int main(void)
{
	Candy ca("����");
	Chocolate ch("���ݸ�");

	Snack snack_basket [4] = {Candy("�����"), Candy("������"), Chocolate("���"), Chocolate("���")};
	for (int i = 0; i < 4; i++)
	{
		std::cout << snack_basket[i].get_info() << std::endl;
	}
	return 0;
}