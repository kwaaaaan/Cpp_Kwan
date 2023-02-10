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
		std::cout << "점심은 학식" << std::endl;
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
		std::cout << "점심은 김가네 김밥" << std::endl;
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
		std::cout << "점심은 백종원 피자" << std::endl;
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
//		cout << "나는 사람이야 \n";
//	}
//};
//
//class Student : public Person { // 기본값 private
//	string stu_id;
//public:
//	Student() : Person() {}
//	void show() {
//		cout << "나는 학생이야 \n";
//	}
//};
//
//class Professor : public Person { // 기본값 private
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
//	// 오류가 난다
//	// 둘 중에 하나가 실행될 것 같다.
//
//	return 0;
//}