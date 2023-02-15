// static(����) ���. Person�� class ������ ��������(counting)
// class�ȿ� �ִ� ���(����, �Լ�)�� main���� ��ü�� ������ ������ �޸𸮰� �Ҵ���� �ʴµ�, static�� ���Ͽ����� ����Ǿ main�Լ��� ��ü�� �������� �ʾƵ� �޸𸮰� �Ҵ��
#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;

class Person
{
protected:
	string name;
	static int static_var;				// static������ main, class �� �ȿ����� �ʱ�ȭ�� �Ұ����� >> main�Լ� class�ۿ��� �ʱ�ȭ ����!
	static int count;
public:
	static void static_method()				// static���� ���� method �ȿ����� �Ϲݸ��(ex. info, set_name ��)�� ������ �Ұ�����.
	{
		cout << "����ƽ �޼ҵ� �׽�Ʈ" << endl;
	}
	static int get_count()
	{
		return count;
	}
	Person()
	{
		this->name = "�ƹ���";
		count++;
	}
	virtual ~Person()
	{
		cout << "����� �Ҹ����Դϴ�." << endl;
		count--;
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
int Person::count = 0;

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

int Person::static_var = 0;

int main()
{
	Person::static_method();				//��ü�� ���� ���� ����
	cout << Person::get_count() << endl;
											//static����� ��� ��ü�� �ϳ��� ������ �����մϴ�.
											//name �� static����� X >> ��ü���� ������ ���� �Ҵ��
											//static_var�� static����� O >> ��ü���� ������ ���� �Ҵ�����ʰ�, ��簴ü�� ���� ������ ������.
	Person p;
	
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("ȫ�浿");

	Person p2;

	/*cout << p.get_name() << endl;
	cout << p1.get_name() << endl;*/

	cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl;
	
	cout << Person::get_count() << "��" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++)
	{
		p3[i] = new Person();
	}

	cout << Person::get_count() << "��" << endl;

	for (int i = 0; i < 5; i++)
	{
		delete p3[i];
	}
	cout << Person::get_count() << "��" << endl;

	cout << "-------------------------------------------------------" << endl;

	std::vector<Person*> persons = { new Person(), new Person() };					//������ vector�� ����� ������ �ڿ� *���̸� ��
	cout << Person::get_count() << "��" << endl;

	persons.push_back(new Person());
	cout << Person::get_count() << "��" << endl;
	cout << persons.size() << "������" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++)
	{
		delete persons.at(i);		// �޽��� ���� ������
	}
	for (int i = 0; i < size; i++)
	{
		persons.pop_back();			// �޽� ���ڸ� �÷���
	}

	return 0;
}