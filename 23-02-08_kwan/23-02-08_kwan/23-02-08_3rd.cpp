#include<iostream>
struct Pos
{
	int x;
	int y;
};
//public, private
class Cat //class는 정보를 은닉함
{
 // 정보은닉을 하지않는 명령어 , 정보은닉을 하고싶을 때에는 private;라는 명령어 사용
	std::string name;
	std::string species; 
	int age = 0;
public:
	Cat() // "생성자"문법 << 함수(method)임,,, class로 객체를 만들때 바로 실행됨 
	{
		std::cout << age <<"Cat 인스턴스 생성";
	}
	Cat(std::string name)
	{
		this->name = name; //thie->name은 public 밑에 있는 name을 불러옴
		std::cout << this->name << std::endl;
	}
	
	void mew()
	{
		std::cout << "\n야옹";
	}

	void eat()
	{
		std::cout << "\n생선을 먹는다";
	}
	// 밑으로 getter
	std::string get_name()
	{
		return name;
	}	
	std::string get_species()
	{
		return species;
	}
	
	int get_age()
	{
		return age;
	}
	// 밑으로 setter
	void set_name(std::string name)
	{
		this->name = name;
	}
	void set_species(std::string species) 
	{
		this->species = species;
	}
	void set_age(int age) 
	{
		this->age = age;
	}

};
int main(void)
{
	Pos p = { 2, 6 };
	p.x = 5;
	std::string x;
	// 생성자는 객체를 만들기만 하면 Cat안의 생성자가 실행됨
	Cat cat; // Cat << 클래스 이름, _cat << 객체,,,
	
	//Cat a("나비");
	//std::cin >> x; //입력할걸 만들어줄때
	//Cat a = Cat(x);
	Cat a = Cat("나비");

	int age = a.get_age();
	cat.set_age(5); //age가 5로 바뀜
	cat.age = 5;

	Cat cat_2;
	std::cout << cat.age << " " << cat_2.age;

	a.mew();
	a.eat();

	//std::string name = a.name
	std::string name = a.get_name();

	return 0;
}
//가져오는거 getter, 세팅하는거 setter