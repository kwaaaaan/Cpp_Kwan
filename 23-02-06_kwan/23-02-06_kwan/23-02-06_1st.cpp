#include <iostream>
int main(void)
//
//{
//	//int num;
//	//std::cin >> num;
//	//int num_array[]; //<< ���� ��!
//
//	int* p; // �����ͷ� ��������
//	int n = 5; //n�� 5�� �ʱ�ȭ
//	p = &n; // p�� �޸� �ּҸ� ��Ƶ�
//
//	std::cout << p << std::endl;
//	std::cout << n << std::endl;
//	std::cout << &n << std::endl;
//	std::cout << *p << std::endl; // p���ٰ� �Ҵ�� ���� ������ ��
//
//	n = 20;
//	std::cout << p << std::endl;
//	std::cout << *p << std::endl;
//
//	*p = 30;
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;
//	
//	// '&�� �ּ��� ������ ã�ư���� ��', *p
// delete p; //�޸� �ݳ�
// 
//	return 0;
//
//}

//{
//	int num;
//	std::cin >> num;
//	int* num_array = new int[num];
//
//	for (int i = 0; i<num; i++)
//	{
//		num_array[i] = 1;
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		std::cout << num_array[i] <<""<< std::endl;
//	}
//	
//	delete[] num_array; //���� �޸� �ݳ�
//
//	return 0;
//}
//{
//	//num�� �޾Ƽ�, num x num �迭�� �������
//	// *�����迭������ for each�� ��� �Ұ�*
//	int num;
//	std::cin >> num;
//	int** num_array = new int* [num];
//	for (int i = 0; i < num; i++)
//	{
//		num_array[i] = new int[num];
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		for (int j = 0; j < num; j++)
//	
//		{
//			num_array[i][j] = 1;
//			std::cout << num_array[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	//�����迭 ����
//	for (int i = 0; i < num; i++)
//	{
//		delete[] num_array[i];
//	}
//	delete[] num_array;
//
//	//vector�� ������ �߰��Ǹ鼭 �޸� �Ҵ��� ���ڵ����� �� �� ����.
//
//	return 0;
//}
//����ڷκ��� x,y 2���� �ڿ����� �Է¹ޱ�, ���� ����ڰ� x�� y�� 0�̳� ������ �Է��Ѵٸ� �����޼����� ��� �� �ٽ� �Է¹ޱ�
// x*y�� ũ�⸦ ���� ������ �����迭 arr�� ����
// arr[0][0]���� arr[x][y]���� ������� 1���� x*y ����
// arr[0][0]���� arr[x][y]���� ����� �� ���
//
//{
//	int x, y;
//	std::cout << "x�� �Է��ϼ��� : " << std::endl;
//	std::cin >> x;
//	
//	std::cout << "y�� �Է��ϼ��� : " << std::endl;
//	std::cin >> y;
//
//	int **array_number = new int*[x,y];
//
//
//	if (x && y > 0)
//	{
//		for (int i = 0; i < x+y; i++)
//		{
//			array_number[i] = new int[x];
//			array_number[i] = new int[y];
//		}
//
//		for (int i = 0; i < x; i++)
//		{
//			for (int j = 0; j < y; j++)
//			{
//				array_number[i][j]= x;
//				array_number[i][j]= y;
//
//				std::cout << i <<std::endl<< j << std::endl;
//			}
//
//		}
//
//	}
//	else
//	{
//		std::cout << "����� �Է��ϼ���" << std::endl;
//	}
//
//
//	return 0;
//}


// �ǽ� 1
{
	int x, y;

	while (1)
	{
		std::cout << "x�� �Է��ϼ��� : " << std::endl;
		std::cin >> x;
		std::cout << "y�� �Է��ϼ��� : " << std::endl;
		std::cin >> y;
		if (x > 0 && y > 0) break;
		else std::cout << "����� �Է��ϼ���" << std::endl;
	}
	int** arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}

	int a = 1;
	for (int i = 0; i < x; i++)
	{

		for (int j = 0; j < y; j++)
		{
			arr[i][j] = a++;
			std::cout << arr[i][j] << " ";
				
		}

		std::cout << std::endl;
	}

	for (int i = 0; i < x; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;

}