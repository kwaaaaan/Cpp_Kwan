// ���̸� �Է��ϼ��� ��� ������ ����ϰ� ����ڷκ��� ���ڸ� �Է¹ޱ�
// �Էµ� ���ڰ� 1���� 7������ "����", 8���� 13������ "�ʵ��л�", 14���� 16������ ���л�, 17���� 19������ ����л�, 20 �̻��̸� ������ ���
// ���̰� 200�̻��̸�, "���̰� �ʹ� �����ϴ�..!" ���
//
//#include <iostream>
//int main(void)
//{
//	int i;
//	std::cout << "���̸� �Է��ϼ���" << std::endl;
//	std::cin >> i;
//
//	if (i >= 200)
//	{
//		std::cout << "���̰� �ʹ� �����ϴ�." << std::endl;
//	}
//	else if (i>=1 && i <= 7)
//	{
//		std::cout<< "����" << std::endl;
//	}
//	else if (i <= 13)
//	{
//		std::cout<< "�ʵ��л�" << std::endl;
//	}
//	else if (i <= 16)
//	{
//		std::cout<< "���л�" << std::endl;
//	}
//	else if (i <= 19)
//	{
//		std::cout<< "����л�" << std::endl;
//	}
//	else if (i >= 20)
//	{
//		std::cout<< "����" << std::endl;
//	}
//	else
//	{
//		std::cout << "�׷����̴� �ѱ��� �����ϴ�." << std::endl;
//	}
//
//	return 0;
//}

// �̸��� �Է��ϼ����� ������ ����ϰ� ����ڷκ��� �̸��� �Է¹ޱ�
// ȫ�浿�� �ԷµǸ� ����, �������� �ԷµǸ� ����, �׿��� ������ �ԷµǸ� �𸣰ھ�� ���
//
#include <iostream>
int main(void)
{
	std::string a;
	std::string b = "������";
	std::string c = "ȫ�浿";

	std::cout << "�̸��� �Է��ϼ���" << std::endl;
	std::cin >> a;
	if (a == b)
	{
		std::cout << "����" << std::endl;
	}

	else if (a == c)
	{
		std::cout << "����" << std::endl;
	}

	else
	{
		std::cout << "�𸣰ھ��" << std::endl;
	}

	return 0;
}

// ���� �Է¹ޱ�,,, 5�� ����̸� "�Է��� ���ڴ� 5�� ����Դϴ�."
// 5�� ����� �ƴ϶�� "5�� ����� �ƴմϴ�."
//
//#include <iostream>
//int main(void)
//{
//	int a;
//
//	std::cout << "���ڸ� �Է��ϼ���" << std::endl;
//	std::cin >> a;
//	//if (a == 0)
//	//{
//	//	std::cout << "�Է��Ͻ� ���ڴ� 0�Դϴ�." << std::endl;
//	//}
//
//	//else if (a % 5 == 0)
//	//{
//	//	std::cout << "5�� ��� �Դϴ�." << std::endl;
//	//}
//	//else
//	//{
//	//	std::cout << "5�ǹ���� �ƴմϴ�." << std::endl;
//	//}
//	(a % 5) == 0 ? std::cout << a << "�� 5�� ����Դϴ�." : std::cout << a << " 5�� ����� �ƴմϴ�";
//	return 0;
//}

// �ΰ��� ������ �����ڸ� �Է¹޾� ����� �� �ִ� ���α׷� �����
//#include <iostream>
//int main(void)
//{
//	int a;
//	int b;
//	char q;
//
//
//	std::cout << "������ �Է��� �ֽʽÿ�" << std::endl;
//	std::cin >> a;
//	std::cout << "�����ڸ� �����Ͽ� �ֽʽÿ�" << std::endl;
//	std::cin >> q;
//	std::cout << "�ι�° ������ �Է��� �ֽʽÿ�" << std::endl;
//	std::cin >> b;
//	
//	
//	if (q == '+' )
//	{
//		std::cout << "�� ������ ���� �����" << a + b << "�Դϴ�.";
//	}
//	else if (q == '-')
//	{
//		std::cout << "�� ������ ���� �����" << a - b << "�Դϴ�.";
//	}
//	else if (q == '*')
//	{
//		std::cout << "�� ������ ���� �����" << a * b << "�Դϴ�.";
//	}
//	else if (q == '/')
//	{
//		std::cout << "�� ������ ���� �����" << a / b << "�Դϴ�.";
//	}
//	else
//	{
//		std::cout << "�߸� �Է��ϼ̽��ϴ�." << std::endl;
//	}
//
//
//	return 0;
//}