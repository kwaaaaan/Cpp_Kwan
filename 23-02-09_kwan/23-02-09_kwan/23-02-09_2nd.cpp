#include <iostream>

class Person 
{
protected: // ��ӹ޴� class������ ��밡�� �� �� �ְ� �������.
	std::string name;
private: // ���� protected�� private�� ����ϰ� �ʹٸ�, getter�� setter�� ����ؾ���.
	std::string gender;
public:
	int age;
	void talk() // 'talk �Լ�'
	{
		std::cout << "���ϱ�" << std::endl;
	}
	void eat()
	{
		std::cout << "�Ա�" << std::endl;
	}
	void sleep()
	{
		std::cout << "���ڱ�" << std::endl;
	}

};

class Student : public Person 
	//' : public Person'�� Person class�� public���� �����ϱ����� ������.
	// 1���� private 2���� protected 3���� public --> 
	// public���� �޾ƿ��� �״��
	// protecte���� �޾ƿ��� public�� protecte����
	// private���� �޾ƿ��� ��� private����
	// 1������ �޾ƿ��� �� 1������ �ٲ��, 2������ �ٲ�� 1���� ������ �ְ� 3������ 2������, 3������ �״��.
{
	//class������ ��������� �������� �� �ʱ�ȭ�� ���ÿ� �ϴ°��� ����������, ��������� �ʱ�ȭ�� �����ϴ°��� �ȵ�.
	std::string stu_id;
public:
	// age = 25;
	void study()
	{
		std::cout << "�����ϱ�" << std::endl;
	}
	void test()
	{
		name = "�л� 1";
		age = 25;
		// gender = "����"; << private�ȿ� �־ ����
	}
};
// class�� �����Լ� �ȿ����� �� �� ����.
int main(void)
{
	Student s;
//	s.name = "ȫ�浿"; << ��ӹ��� class�� �ƴ϶� ������ �Ұ�����.
	s.age = 21;

	return 0;
}