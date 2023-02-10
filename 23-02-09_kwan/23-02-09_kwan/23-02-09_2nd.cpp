#include <iostream>

class Person 
{
protected: // 상속받는 class에서는 사용가능 할 수 있게 만들어줌.
	std::string name;
private: // 만약 protected와 private를 사용하고 싶다면, getter과 setter을 사용해야함.
	std::string gender;
public:
	int age;
	void talk() // 'talk 함수'
	{
		std::cout << "말하기" << std::endl;
	}
	void eat()
	{
		std::cout << "먹기" << std::endl;
	}
	void sleep()
	{
		std::cout << "잠자기" << std::endl;
	}

};

class Student : public Person 
	//' : public Person'은 Person class에 public으로 접근하기위한 문법임.
	// 1순위 private 2순위 protected 3순위 public --> 
	// public으로 받아오면 그대로
	// protecte으로 받아오면 public이 protecte으로
	// private으로 받아오면 모두 private으로
	// 1순위로 받아오면 다 1순위로 바뀌고, 2순위로 바뀌면 1순위 가만히 있고 3순위는 2순위로, 3순위는 그대로.
{
	//class에서는 변수선언과 변수선언 및 초기화를 동시에 하는것은 가능하지만, 변수선언과 초기화를 따로하는것은 안됨.
	std::string stu_id;
public:
	// age = 25;
	void study()
	{
		std::cout << "공부하기" << std::endl;
	}
	void test()
	{
		name = "학생 1";
		age = 25;
		// gender = "여자"; << private안에 있어서 못씀
	}
};
// class는 메인함수 안에서도 쓸 수 있음.
int main(void)
{
	Student s;
//	s.name = "홍길동"; << 상속받은 class가 아니라서 접근이 불가능함.
	s.age = 21;

	return 0;
}