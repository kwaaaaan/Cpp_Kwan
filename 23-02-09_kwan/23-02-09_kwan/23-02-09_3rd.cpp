#include <iostream>
class Person
{
protected:
	std::string  name;
private:
public:
	//Person()
	//{
	//	std::cout << "Person������ �����." << std::endl;
	//}
	Person(std::string name)
	{
		this->name = name;
	}
};
class Student : public Person
{
	std::string stu_id;
public:
	/*Student() : Person() // Person() ����, ���� Person("aa")��� Person(std::string name)����
	{
		std::cout << "Student ������ �����.";
	}
	Student(std::string stu_id) : Person ()
	{
		this->stu_id = stu_id;
	}*/
	Student() : Person("aaa")
	{
		std::cout << "Student ������ �����.\n";
	}
	Student(std::string name, std::string stu_id) : Person(name)
	{
		this->stu_id = stu_id;
	}
};
int main(void)
{
//	Student s("1111111"); // �����ڰ� �����.
	Person p("������");


	return 0;
}