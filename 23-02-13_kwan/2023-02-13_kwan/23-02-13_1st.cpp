// �����Լ� --> �θ�Ŭ������ �ִ� �Լ��� �ڽ�Ŭ�������� ������ �Ұ��� ����ϰ� ����°���
// virtual �Լ��� �����Ű�� �ʰ� �ڽ�Ŭ������ �ִ� �Լ��� �Ѿ�� �����Ŵ.
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
};


int main(void)
{
	//Person s = Student();			//~Person(�θ�Ŭ������ �ڷ������� �ڽ�Ŭ������ �ν��Ͻ��� ����� up casting)
	//s.info();						//�������ε� �ڵ�
	//
	//								//������ �������ε�, �����Ϳ� �����޸𸮸� ���ÿ� ���
	//Person* ss = new Student();		//�������ε��� ������ִ� ���
	//ss->info();						//(*ss).info();�ε� �� �� ����
	//delete ss;						//delete�Ἥ, �޸� �״� �������
	//
	//								//�����ε� �������ε�, �����͸� ���(�����޸� ���x)
	//Student stu;					//build�߿� �Ҵ�� �޸𸮴� ��ȯ�� ������ �ʾƵ� �ڵ����� ������
	//Person* sss = &stu;				//delete�� ����ϸ� ������ �����߿� ������ ��(runtime error)
	//sss->info();
	//

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++)
	{
		per_arr[i]->info(); //new�� 3���Ἥ �ؿ� delete�� 3���Ἥ ����������
	}
	for (int i = 0; i < 3; i++)
	{
		delete per_arr[i];
	}
								//�迭�� ���� �޸� ������ �⺻��int*po = new int[3]; delet[] po;, delete[] per_arr;
								//Person persons[2] = { Student(), Student() };

	return 0;
}

//
//#include <iostream>
//class Snack
//{
//protected:
//	std::string info;
//public:
//	virtual std::string get_info()
//	{
//		return info;
//	}
//};
//class Candy : public Snack
//{
//protected:
//	std::string taste;
//	int price;
//	std::string pd_name;
//	std::string pd_cp;
//public:
//	Candy(std::string info)
//	{
//		this->info = info;
//	}
//};
//class Chocolate : public Snack
//{
//protected:
//	std::string shape;
//	int price;
//	std::string pd_name;
//	std::string pd_cp;
//public:
//	Chocolate(std::string info)
//	{
//		this->info = info;
//	}
//};
//
//int main(void)
//{
//	Candy ca("����");
//	Snack* s = &ca;
//	s->get_info();
//
//	Chocolate ch("���ݸ�");
//	Snack* ss = &ch;
//	ss->get_info();
//
//	Snack* snack_basket[4] = { new Candy("�����"),new Candy("������"),new Chocolate("���"), new Chocolate("���") };
//	for (int i = 0; i < 4; i++)
//	{
//		snack_basket[i]->get_info();
//	}
//	return 0;
//}