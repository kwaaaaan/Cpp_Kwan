// static(정적) 멤버. Person의 class 갯수를 보기위해(counting)
// class안에 있는 멤버(변수, 함수)는 main에서 객체를 만들지 않으면 메모리가 할당되지 않는데, static은 파일영역에 저장되어서 main함수에 객체를 생성하지 않아도 메모리가 할당됨
#include <iostream>
#include <vector>
using std::string;
using std::cout;
using std::endl;

class Person
{
protected:
	string name;
	static int static_var;				// static변수는 main, class 등 안에서는 초기화가 불가능함 >> main함수 class밖에서 초기화 가능!
	static int count;
public:
	static void static_method()				// static으로 만든 method 안에서는 일반멤버(ex. info, set_name 등)에 접근이 불가능함.
	{
		cout << "스태틱 메소드 테스트" << endl;
	}
	static int get_count()
	{
		return count;
	}
	Person()
	{
		this->name = "아무개";
		count++;
	}
	virtual ~Person()
	{
		cout << "사람의 소멸자입니다." << endl;
		count--;
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
int Person::count = 0;

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

int Person::static_var = 0;

int main()
{
	Person::static_method();				//객체를 통해 들어가지 않음
	cout << Person::get_count() << endl;
											//static멤버는 모든 객체가 하나의 공간을 공유합니다.
											//name 은 static멤버가 X >> 객체별로 공간이 따로 할당됨
											//static_var는 static멤버가 O >> 객체별로 공간이 따로 할당되지않고, 모든객체가 같은 공간을 공유함.
	Person p;
	
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("홍길동");

	Person p2;

	/*cout << p.get_name() << endl;
	cout << p1.get_name() << endl;*/

	cout << p.get_count() << " " << Person::get_count() << " " << p1.get_count() << endl;
	
	cout << Person::get_count() << "명" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++)
	{
		p3[i] = new Person();
	}

	cout << Person::get_count() << "명" << endl;

	for (int i = 0; i < 5; i++)
	{
		delete p3[i];
	}
	cout << Person::get_count() << "명" << endl;

	cout << "-------------------------------------------------------" << endl;

	std::vector<Person*> persons = { new Person(), new Person() };					//포인터 vector를 만들고 싶으면 뒤에 *붙이면 됨
	cout << Person::get_count() << "명" << endl;

	persons.push_back(new Person());
	cout << Person::get_count() << "명" << endl;
	cout << persons.size() << "사이즈" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++)
	{
		delete persons.at(i);		// 펄슨의 수를 없애줌
	}
	for (int i = 0; i < size; i++)
	{
		persons.pop_back();			// 펄슨 숫자를 늘려줌
	}

	return 0;
}