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
		cout << "사람의 소멸자입니다." << endl;
	}
	virtual void info()
	{
		cout << "사람입니다." << endl;
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
		cout << "학생의 소멸자입니다." << endl;
	}
	void info()					//class Person에서 virtual을 사용해서 가상함수를 만들어주어 사용가능한거임.
	{
		cout << "학생입니다." << endl;
	}
	void test()					//밑에서 동적바인딩으로 사용하고 싶으면 Person class의 가상함수로 test를 선언해 주어야 함.
	{
		cout << "학생의 test 함수" << endl;
	}
};
class Instructor : public Person
{
	string student_id;
public:
	~Instructor()
	{
		cout << "학생의 소멸자입니다." << endl;
	}
	void info()
	{
		cout << "강사입니다." << endl;
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

// 변수앞에 괄호가 있으면 자료형을 바꿔서 형변환을 해주겠다는것임.
int main()
{
	//up cast						// Person p1 = Student();
	Person* p = new Student();		// p->test();
									// Student* s1 = (Student*)p1; << 요건 안됨
	cout << p->get_name() << endl;
	
	//down cast
	Student* s = (Student*)p;
	s->test();
	p->set_name("홍길동");
	cout << p->get_name() << s->get_name() << endl;
	s->set_name("성춘향");
	cout << p->get_name() << s->get_name() << endl;

	Student& s1 = *(Student*)p;		// down casting 한거
	s1.set_name("코디");
	
	cout << p->get_name() << s1.get_name() << endl;		// int a = 1; --> int& b = a;, int* c = &a; --> 두가지 경우 똑같은 값 출력

	Student s2 = *(Student*)p;
	s2.set_name("코양");
	cout << p->get_name() << s2.get_name() << endl;

	delete p;
	return 0;
}