#include <iostream>
class Student
{
protected:
	std::string name;
	std::string school;
	std::string age;
	std::string id_number;
public:
	Student() {}
	void lunch()
	{
		std::cout << "������ �н�" << std::endl;
	}
};

class Kim : Student
{
protected:
	std::string univ;
	std::string junior, senior;
public:
	Kim() : Student() 
	{
		this->name = "Kim Ill Sung";
		this->school = "peyung yang";
		this->age = "die";
		this->id_number = "999999";
	}
	void lunch()
	{
		std::cout << "������ �谡�� ���" << std::endl;
	}
};

class Park : Student
{
protected:
public:
	Park() : Student() 
	{
		this->name = "Park jung hee";
		this->school = "seoul";
		this->age = "die";
		this->id_number = "0000000";
	}
	void lunch()
	{
		std::cout << "������ ������ ����" << std::endl;
	}

};

int main(void)
{
	Student s;
	s.lunch();
	Kim k;
	k.lunch();
	Park p;
	p.lunch();
	return 0;
}
//
//
//
///////////////////////////////////////////////
//#include <iostream>
//
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
////private > protected > public
//class Person {
//protected:
//	string name;
//public:
//	Person() {}
//	string get_name() {
//		return name;
//	}
//	void show() {
//		cout << "���� ����̾� \n";
//	}
//};
//
//class Student : public Person { // �⺻�� private
//	string stu_id;
//public:
//	Student() : Person() {}
//	void show() {
//		cout << "���� �л��̾� \n";
//	}
//};
//
//class Professor : public Person { // �⺻�� private
//	string stu_id;
//public:
//	Professor() : Person() {}
//
//};
//
//
//int main() {
//	Person p;
//	p.show();
//	Student s2;
//	s2.show();
//	Professor pro;
//	pro.show();
//	// ������ ����
//	// �� �߿� �ϳ��� ����� �� ����.
//
//	return 0;
//}