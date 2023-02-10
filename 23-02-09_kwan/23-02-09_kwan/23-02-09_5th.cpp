#include <iostream>
class Person
{
protected:
	std::string name;
public:
	Person() {}
	std::string get_name()
	{
		return name;
	}
	void print()
	{
		std::cout << "Person print\n";
	}
};
class Student : public Person
{
	std::string stu_id;
public:
	Student() : Person(){}
	void print()
	{
		std::cout << "Student print\n";
	}
};

int function() {
	int a = 2;
	return a;
}

int main(void)
{

	int b = 2;

	int c = function();

	Student s2;
	s2.print();

}