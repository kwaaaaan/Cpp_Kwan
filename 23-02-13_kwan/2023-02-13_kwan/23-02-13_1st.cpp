// 가상함수 --> 부모클래스에 있는 함수를 자식클래스에서 재정의 할것을 기대하고 만드는것임
// virtual 함수는 실행시키지 않고 자식클래스에 있는 함수로 넘어가서 실행시킴.
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
};


int main(void)
{
	//Person s = Student();			//~Person(부모클래스의 자료형으로 자식클래스의 인스턴스를 만들면 up casting)
	//s.info();						//정적바인딩 코드
	//
	//								//밑으로 동적바인딩, 포인터와 동적메모리를 동시에 사용
	//Person* ss = new Student();		//동적바인딩을 만들어주는 경우
	//ss->info();						//(*ss).info();로도 쓸 수 있음
	//delete ss;						//delete써서, 메모리 항당 해줘야함
	//
	//								//밑으로도 동적바인딩, 포인터만 사용(동적메모리 사용x)
	//Student stu;					//build중에 할당된 메모리는 반환을 해주지 않아도 자동으로 해제됨
	//Person* sss = &stu;				//delete를 사용하면 오히려 실행중에 오류가 남(runtime error)
	//sss->info();
	//

	Person* per_arr[3] = { new Student(), new Instructor(), new Student() };
	for (int i = 0; i < 3; i++)
	{
		per_arr[i]->info(); //new를 3번써서 밑에 delete도 3번써서 해제시켜줌
	}
	for (int i = 0; i < 3; i++)
	{
		delete per_arr[i];
	}
								//배열에 대한 메모리 해제의 기본형int*po = new int[3]; delet[] po;, delete[] per_arr;
								//Person persons[2] = { Student(), Student() };

	return 0;
}

//
//#include <iostream>
//class Snack
//{
//protected:
//	std::string info;
//public:
//	virtual std::string get_info()
//	{
//		return info;
//	}
//};
//class Candy : public Snack
//{
//protected:
//	std::string taste;
//	int price;
//	std::string pd_name;
//	std::string pd_cp;
//public:
//	Candy(std::string info)
//	{
//		this->info = info;
//	}
//};
//class Chocolate : public Snack
//{
//protected:
//	std::string shape;
//	int price;
//	std::string pd_name;
//	std::string pd_cp;
//public:
//	Chocolate(std::string info)
//	{
//		this->info = info;
//	}
//};
//
//int main(void)
//{
//	Candy ca("사탕");
//	Snack* s = &ca;
//	s->get_info();
//
//	Chocolate ch("초콜릿");
//	Snack* ss = &ch;
//	ss->get_info();
//
//	Snack* snack_basket[4] = { new Candy("딸기맛"),new Candy("포도맛"),new Chocolate("흰색"), new Chocolate("까만색") };
//	for (int i = 0; i < 4; i++)
//	{
//		snack_basket[i]->get_info();
//	}
//	return 0;
//}