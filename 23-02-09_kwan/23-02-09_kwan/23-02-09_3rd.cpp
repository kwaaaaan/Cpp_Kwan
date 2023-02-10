#include <iostream>
class Person
{
protected:
	std::string  name;
private:
public:
	//Person()
	//{
	//	std::cout << "Person생성자 실행됨." << std::endl;
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
	/*Student() : Person() // Person() 선택, 만약 Person("aa")라면 Person(std::string name)선택
	{
		std::cout << "Student 생성자 실행됨.";
	}
	Student(std::string stu_id) : Person ()
	{
		this->stu_id = stu_id;
	}*/
	Student() : Person("aaa")
	{
		std::cout << "Student 생성자 실행됨.\n";
	}
	Student(std::string name, std::string stu_id) : Person(name)
	{
		this->stu_id = stu_id;
	}
};
int main(void)
{
//	Student s("1111111"); // 생성자가 실행됨.
	Person p("ㅁㄴㅇ");


	return 0;
}