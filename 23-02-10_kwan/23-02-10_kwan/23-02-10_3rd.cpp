// class�� ������ҿ��� �ʵ�(����), �޼ҵ�(�Լ�), ������(�޼ҵ��� ����), �Ҹ���(�޼ҵ��� ����)�� ����.
// ���� �޸𸮰� �Ҵ�ȰͿ� ���� �޸𸮰��� �ٽ� Ȯ���� ���ؼ� �Ҹ��ڸ� ��
#include <iostream>

class Person
{
	int age;
	std::string name;
	int* p = new int[3]; //���� �޸� �Ҵ�
public:

	Person() // class�� �����̸��� ���� ������
	{
		std::cout << "������ ����" << std::endl;
	}
	Person(std::string name) // class�� �����̸��� ���� ������
	{
		std::cout << "������ ����2" << std::endl;
	}
	~Person() // �����ھտ� ~(����)�� ������ �Ҹ��ڰ� ��, �Ұ�ȣ �ȿ� �Ű������� ���� �� ����, �������� �����. ���� �����ڶ� ����.
	{
		delete[] p;  //delete[]�� �� ���� ������ �Ҹ��ڸ� ���� ������ ����
		std::cout << "�Ҹ��� ����" << std::endl;
	}
	void test() // �޼ҵ�
	{
		std::cout << "test" << std::endl;
	}
};
class Student : public Person
{
public:
	~Student()
	{
		std::cout << "�Ҹ��� ����(�л�)" << std::endl;
	}
};

int main(void)
{

	//Person p("asd");
	//p.test(); //�޼ҵ带 ����Ҷ���
	//			// main�Լ����� �Ҹ��ڸ� �����ϴ� ���p.~Person();			
	//			//	p.~Person();
	//Person p2;
	Student s;

	return 0;
}