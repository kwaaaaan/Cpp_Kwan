#include <iostream>
#include <vector>
#include "Person.h"
#include "Student.h"

using std::string;
using std::cout;
using std::endl;


class Instructor : public Person {
public:
	~Instructor() {
		cout << "강사의 소멸자입니다." << endl;
	}
	void info() {
		cout << "강사입니다." << endl;
	}
};

int main() {
	// Person::info();
	// static 멤버는 모든 객체가 하나의 공간을 공유합니다.
	// name static 멤버 X => 객체 별로 공간이 따로 할당됨.
	// static_var static 멤버 O => 객체 별로 공간이 따로 할당되지 않고, 모든 객체가 같은 공간을 공유.
	Person::static_method();
	cout << Person::get_count() << endl;
	// int i = 0;
	Student s;

	Person p;
	p.info();
	p.static_method();

	Person p1;
	p1.set_name("홍길동");

	Person p2;

	cout << Person::get_count() << "명" << endl;

	Person* p3[5];
	for (int i = 0; i < 5; i++) {
		p3[i] = new Person();
	}

	cout << Person::get_count() << "명" << endl;

	for (int i = 0; i < 5; i++) {
		delete p3[i];
	}

	cout << Person::get_count() << "명" << endl;

	std::vector<Person*> persons = { new Person(), new Person() };

	cout << Person::get_count() << "명" << endl;

	persons.push_back(new Person());

	cout << Person::get_count() << "명" << endl;

	cout << persons.size() << "사이즈" << endl;

	int size = persons.size();

	for (int i = 0; i < size; i++) {
		delete persons.at(i);
		// delete persons[i];
	}

	for (int i = 0; i < size; i++) {
		persons.pop_back();
	}

	cout << Person::get_count() << "명" << endl;

	return 0;
}