//#include <iostream>
//class Person
//{
//protected:
//	std::string name;
//	std::string position;
//public:
//	 void test() // virtual을 써줘서 가상화를 한다음에 밑에 new Student와 p200->test로 넘기면 사용 가능
//	{
//		std::cout << "Person의 테스트 함수 입니다." << std::endl;
//	}
//	 std::string get_position()
//	 {
//		 return position;
//	 }
//	 //void get_position() getter 안쓰는 방법
//	 //{
//		// std::cout << position;
//	 //}
//};
//class Student : public Person
//{
//protected:
//	std::string stu_id;
//public:
//	void aaa() {}
//	Student(std::string position)
//	{
//		this->position = position;
//	}
//	void test() // main함수에서 쓰려면 포인터 할당이 필요하기 떄문에 나중에 배울예정
//	{
//		std::cout << "Student의 테스트 함수 입니다." << std::endl;
//	}
//};
//class Instructor : public Person
//{
//public:
//	Instructor(std::string position)
//	{
//		this->position = position;
//	}
//};
//
//int main(void)
//{
//	//Person p; // 자료형 정도로 생각하면 되고, Person의 정보만을 갖고오는 객체정도임
//	Person p = Person(); // 이게 생성자 호출임
//	p.test(); //Person의 테스트함수에 접근
//
//	//Person p2 = Student(); //Student 생성자를 호출해서 인스턴스를 만들어줌.
//	//p2.test(); // Stu
//	////p2.aaa();
//
//	Person p3[4] = { Instructor("강사"), Student("학생1"), Student("학생2"), Student("학생3") };
//	for (int i = 0; i < 4; i++)
//	{
//		std::cout << p3[i].get_position() << std::endl; //getter로 리턴받은값을 출력함
//	}
//	//Person* p200 = new Student();
//	//p200->test();
//	return 0;
//}
// up-casting, 다형성 실현
#include <iostream>
class Snack
{
protected:
	std::string info;
public:
	std::string get_info()
	{
		return info;
	}
};
class Candy : public Snack
{
protected:
	std::string taste;
	int price;
	std::string pd_name;
	std::string pd_cp;
public:
	Candy(std::string info)
	{
		this->info = info;
	}
};
class Chocolate : public Snack
{
protected:
	std::string shape;
	int price;
	std::string pd_name;
	std::string pd_cp;
public:
	Chocolate(std::string info)
	{
		this->info = info;
	}
};

int main(void)
{
	Candy ca("사탕");
	Chocolate ch("초콜릿");

	Snack snack_basket [4] = {Candy("딸기맛"), Candy("포도맛"), Chocolate("흰색"), Chocolate("까만색")};
	for (int i = 0; i < 4; i++)
	{
		std::cout << snack_basket[i].get_info() << std::endl;
	}
	return 0;
}