// 추상클래스
// 추상클래스는 인스턴스를 생성할 수 없음
// 추상메소드는 내용이 없고, c++에서는 "순수 가상 함수"라고 함
// ex) virtual void example() = 0
// 추상메소드가 하나라도 있으면 자동적으로 추상클래스가 됨.
// 자식클래스가 "추상클래스"인 부모클래스의 "순수 가상함수"에 대한 메소드 구현을하지 않으면
// 자식클래스또한 "추상 클래스"가 된다.(바뀔일 없음)

//
//#include <iostream>
//class Elec
//{
//public:
//	virtual void on() = 0; //추상 메소드 --> "순수 가상함수"
//							//virtual void off(){} "가상함수"
//	virtual void off() = 0;
//	void test()
//	{
//		std::cout << "test" << std::endl;
//	}
//};
//class Tv : public Elec  //부모클래스에서 상속받은 순수가상함수를 구현하지 않으면, 자식클래스 또한 추상클래스가 됨
//{
//public:
//	void on()
//	{
//		std::cout << "TV 켜기";
//	}
//	void off()
//	{
//		std::cout << "TV 끄기";
//	}
//};
//class Radio : public Elec
//{
//public:
//	void on()
//	{
//		std::cout << "Radio 켜기";
//	}
//	void off()
//	{
//		std::cout << "Radio 끄기";
//	}
//};
//
//
//int main(void)
//{							//Elec e; --> 추상클래스는 객체(instance)를 생성할 수 없음
//	Tv tv;
//	tv.test();
//	tv.on();
//	tv.off();
//
//	Radio ra;
//	ra.on();
//	ra.off();
//	return 0;
//}





//#include <iostream>
//class Shape
//{
//protected:
//	virtual void draw() = 0;
//};
//
//class Circle : public Shape
//{
//public:
//	void draw()
//	{
//		std::cout << "원" << std::endl;
//	}
//};
//
//class Rect : public Shape
//{
//public:
//	void draw()
//	{
//		std::cout << "사각형" << std::endl;
//	}
//};
//
//class Tria : public Shape
//{
//public:
//	void draw() 
//	{
//		std::cout << "삼각형" << std::endl;
//	}
//};
//
//
//int main(void)
//{
//	Circle c;
//	c.draw();
//	Rect r;
//	r.draw();
//	Tria t;
//	t.draw();
//
//	return 0;
//}