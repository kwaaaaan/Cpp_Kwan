#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Person
{
protected:
	string name;
public:
	virtual ~Person()
	{
		cout << "����� �Ҹ����Դϴ�." << endl;
	}
	virtual void info()
	{
		cout << "����Դϴ�." << endl;
	}
	void set_name(std::string name)
	{
		this->name = name;
	}
	std::string get_name()
	{
		return name;
	}
};

class Student : public Person
{
	string student_id;
public:
	~Student()
	{
		cout << "�л��� �Ҹ����Դϴ�." << endl;
	}
	void info()					//class Person���� virtual�� ����ؼ� �����Լ��� ������־� ��밡���Ѱ���.
	{
		cout << "�л��Դϴ�." << endl;
	}
	void test()					//�ؿ��� �������ε����� ����ϰ� ������ Person class�� �����Լ��� test�� ������ �־�� ��.
	{
		cout << "�л��� test �Լ�" << endl;
	}
};
class Instructor : public Person
{
	string student_id;
public:
	~Instructor()
	{
		cout << "�л��� �Ҹ����Դϴ�." << endl;
	}
	void info()
	{
		cout << "�����Դϴ�." << endl;
	}
	void set_name(string name)
	{
		this->name = name;
	}
	string get_name()
	{
		return name;
	}
};

// �����տ� ��ȣ�� ������ �ڷ����� �ٲ㼭 ����ȯ�� ���ְڴٴ°���.
int main()
{
	//up cast						// Person p1 = Student();
	Person* p = new Student();		// p->test();
									// Student* s1 = (Student*)p1; << ��� �ȵ�
	cout << p->get_name() << endl;
	
	//down cast
	Student* s = (Student*)p;
	s->test();
	p->set_name("ȫ�浿");
	cout << p->get_name() << s->get_name() << endl;
	s->set_name("������");
	cout << p->get_name() << s->get_name() << endl;

	Student& s1 = *(Student*)p;		// down casting �Ѱ�
	s1.set_name("�ڵ�");
	
	cout << p->get_name() << s1.get_name() << endl;		// int a = 1; --> int& b = a;, int* c = &a; --> �ΰ��� ��� �Ȱ��� �� ���

	Student s2 = *(Student*)p;
	s2.set_name("�ھ�");
	cout << p->get_name() << s2.get_name() << endl;

	delete p;
	return 0;
}