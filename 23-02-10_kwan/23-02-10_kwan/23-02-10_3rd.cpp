// class의 구성요소에는 필드(변수), 메소드(함수), 생성자(메소드의 일종), 소멸자(메소드의 일종)이 있음.
// 동적 메모리가 할당된것에 대해 메모리값을 다시 확보를 위해서 소멸자를 씀
#include <iostream>

class Person
{
	int age;
	std::string name;
	int* p = new int[3]; //동적 메모리 할당
public:

	Person() // class와 같은이름을 쓰면 생성자
	{
		std::cout << "생성자 실행" << std::endl;
	}
	Person(std::string name) // class와 같은이름을 쓰면 생성자
	{
		std::cout << "생성자 실행2" << std::endl;
	}
	~Person() // 생성자앞에 ~(물결)이 붙으면 소멸자가 됨, 소괄호 안에 매개변수를 넣을 수 없음, 마지막에 실행됨. 빼고 생성자랑 같음.
	{
		delete[] p;  //delete[]를 써 주지 않으면 소멸자를 쓰는 이유가 없음
		std::cout << "소멸자 실행" << std::endl;
	}
	void test() // 메소드
	{
		std::cout << "test" << std::endl;
	}
};
class Student : public Person
{
public:
	~Student()
	{
		std::cout << "소멸자 실행(학생)" << std::endl;
	}
};

int main(void)
{

	//Person p("asd");
	//p.test(); //메소드를 사용할때는
	//			// main함수에서 소멸자를 실행하는 방법p.~Person();			
	//			//	p.~Person();
	//Person p2;
	Student s;

	return 0;
}