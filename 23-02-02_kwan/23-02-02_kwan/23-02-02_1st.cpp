//#include <iostream>
//int main(void)
//
//{
//	//int i = 0;
//	/*for (i = 0; i < 100; i++) 
//	{
//		std::cout << i+1. <<"�ȳ��ϼ���" << std::endl;
//	}
//
//	for (i = 100; i > 0; i--)
//	{
//		std::cout << i <<"." << "�ȳ��ϼ���" << std::endl;
//	}*/
//
//	////while���� �ڵ带 ��������� ������ ���
//	//std::cin >> i;
//	//while (i!=0) //����ڰ� ��� ���� �Է����� �� ������ ���� ��쿡 ���
//	//{
//	//	i++;
//	//	std::cout << i << ". �ȳ��ϼ���" << std::endl;
//	//}
//
//	/*int i = 100;
//	while (i < 100)
//	{
//		std::cout << i + 1 << ". �ȳ��ϼ���" << std::endl;
//	}
//	do
//	{
//		std::cout << i + 1 << ". �ȳ��ϼ���...." << std::endl;
//	} while (i < 100);
//
//	return 0;
//	*/
//	
//}
//
//#include <iostream>
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		std::cout << 5 * i << std::endl;
//	}
//	for (i = 1; i <= 9; i++)
//	{
//		std::cout <<"---" << i << "��---" << std::endl;
//		for (j = 1; j <= 9; j++)
//		{
//			std::cout <<  i * j << std::endl;
//
//		}
//	}
//
//	return 0;
//}
//
//#include <iostream>
//int main(void)
//{
//	int i=0;
//	int in;
//	int out = 0;
//
//	std::cout << "���ڸ� �Է��Ͻÿ�" << std::endl;
//	std::cin>>in;
//
//	std::cout << "1����" << in << "������ ����" << std::endl;
//	for (i = 0; i <= in; i++)
//	{	
//		out = out + i;
//	}
//	std::cout << out << "�Դϴ�." << std::endl;
//	
//	return 0;
//}
//
// 
 
//// 
//#include <iostream>
//int main(void)
//{
//	int i=0;
//	int j =0;
////	/*std::cout <<  "5��" << std::endl;
////	while (i <= 9)
////	{
////		i++;
////		std::cout << i * 5 << std::endl;
////
////	}
////	*/
//
//	while (i < 9)
//	{
//		i++;
//		j = 0;
//		std::cout<<"----------" << i << "��----------" << std::endl;
//		
//		
//		while (j < 9)
//		{
//			j++;
//			std::cout << i * j << std::endl;
//		}
//		
//
//	}
//
//	return 0;
//
//}
//#include <iostream>
//int main(void)
//{
//	std::cout << "1���� n������ �� ���ϱ�" << std::endl;
//	int i = 0;
//	int in = 0;
//	int out = 0;
//	std::cout << "���������� �Է��Ͻÿ�" << std::endl;
//	std::cin >> in;
//	while (i< in)
//	{
//		i = i + 1;
//		out = i + out;
//	}
//	std::cout << "1���� " << i << "������ ����" << out << "�Դϴ�" << std::endl;
//
//	return 0;
//}

//
//#include <iostream>
//int main(void)
//{
//	int i = 80;
//	int sum = 0;
//	
//	while(i != 0)
//	{
//		std::cout << "���ڸ� �Է��ϼ��� (0:exit) : ";
//		std::cin >> i;
//		sum = sum + i;
//	}
//
//	std::cout << "����ڰ� �Է��� ���� ���� : " << sum << std::endl;
//	return 0;
////}
//
//#include <iostream>
//int two_sum_return(int p1, int p2)
//{
//	int result_sum = 0;
//	result_sum = p1 + p2;
//	return result_sum;
//}
//int two_minus_return(int m1, int m2)
//{
//	int result_minus = 0;
//	if (m1 > m2)
//	{
//		result_minus = m1 - m2;
//	}
//	else
//	{
//		result_minus = m2 - m1;
//	}
//	return result_minus;
//
//}
//int two_cross_return(int c1, int c2)
//{
//	int result_cross = 0;
//	result_cross = c1 * c2;
//	return result_cross;
//}
//
//double two_divide_return(int d1, int d2)
//{
//	double result_divide = 0;
//	result_divide =  (double)d1 / (double)d2;
//	return result_divide;
//}
//
//int main(void)
//{
//	int result_sum = two_sum_return(1, 2);
//	std::cout << result_sum << std::endl;
//	
//	int result_minus = two_minus_return(8, 13);
//	std::cout << result_minus << std::endl;
//	
//	int result_cross = two_cross_return(8, 6);
//	std::cout << result_cross << std::endl;
//
//	double result_divide = two_divide_return(9, 4);
//	std::cout << (double)result_divide << std::endl;
//
//}


////
//#include <iostream>	/*[����] �ǽ�.�ϳ��� ������ �Ű������� �޾Ƽ�
//					�� ���� ¦���̸� "¦��", Ȧ���̸� "Ȧ��" ��� ����ϴ� �Լ� �ۼ�*/
////even, oddnumber
//void eo_number(int eo)
//{
//	int result_eo = 0;
//
//	if (eo % 2 == 0)
//	{
//		std::cout << "¦��" << std::endl;
//	}
//	else
//	{
//		std::cout << "Ȧ��" << std::endl;
//	}
//	//return result_eo;
//}
//int main(void)
//{
//
//	eo_number(6); //�Լ��� ȣ���Ҷ��� �Լ���� ��ȣ�� ���� ���ָ� ��
//	int i;
//	std::cin >> i;
//	//eo_number(i);
//	//std::cout << eo_number(i) <<std::endl;
//
//
//	return 0;
//}
// �ֿܼ� ��ȯ�Ϸ��� return���� ����ȴ�.
// �Լ����� ���� ������ �����Լ����� ����ϰ� ������ return�� ����ϴ�.

#include <iostream>//[����] �ǽ�. �� ���� ���� �Ű������� �޾Ƽ� ���� ���� ū ���� ��ȯ�ϴ� �Լ� �ۼ�.
void three_number(int f, int s, int t)
{
	if (f > s && f > t)
	{
		std::cout << f << std::endl;
	}
	else if (s > f && s > t)
	{
		std::cout << s << std::endl;
	}
	else
	{
		std::cout << t << std::endl;
	}
}

int main(void)
{
	int i = 0;
	int j = 0; 
	int k = 0;
	std::cin >> i >> j >> k;
	three_number(i, j, k);
	return 0;
}