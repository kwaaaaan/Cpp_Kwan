// �߻�Ŭ����
// �߻�Ŭ������ �ν��Ͻ��� ������ �� ����
// �߻�޼ҵ�� ������ ����, c++������ "���� ���� �Լ�"��� ��
// ex) virtual void example() = 0
// �߻�޼ҵ尡 �ϳ��� ������ �ڵ������� �߻�Ŭ������ ��.
// �ڽ�Ŭ������ "�߻�Ŭ����"�� �θ�Ŭ������ "���� �����Լ�"�� ���� �޼ҵ� ���������� ������
// �ڽ�Ŭ�������� "�߻� Ŭ����"�� �ȴ�.(�ٲ��� ����)

//
//#include <iostream>
//class Elec
//{
//public:
//	virtual void on() = 0; //�߻� �޼ҵ� --> "���� �����Լ�"
//							//virtual void off(){} "�����Լ�"
//	virtual void off() = 0;
//	void test()
//	{
//		std::cout << "test" << std::endl;
//	}
//};
//class Tv : public Elec  //�θ�Ŭ�������� ��ӹ��� ���������Լ��� �������� ������, �ڽ�Ŭ���� ���� �߻�Ŭ������ ��
//{
//public:
//	void on()
//	{
//		std::cout << "TV �ѱ�";
//	}
//	void off()
//	{
//		std::cout << "TV ����";
//	}
//};
//class Radio : public Elec
//{
//public:
//	void on()
//	{
//		std::cout << "Radio �ѱ�";
//	}
//	void off()
//	{
//		std::cout << "Radio ����";
//	}
//};
//
//
//int main(void)
//{							//Elec e; --> �߻�Ŭ������ ��ü(instance)�� ������ �� ����
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
//		std::cout << "��" << std::endl;
//	}
//};
//
//class Rect : public Shape
//{
//public:
//	void draw()
//	{
//		std::cout << "�簢��" << std::endl;
//	}
//};
//
//class Tria : public Shape
//{
//public:
//	void draw() 
//	{
//		std::cout << "�ﰢ��" << std::endl;
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