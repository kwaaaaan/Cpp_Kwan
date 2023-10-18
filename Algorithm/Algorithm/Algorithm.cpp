//선택정렬
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int index, temp, min;
//	int array[9] = { 1, 7, 3, 5, 8, 6, 9, 2, 4 };
//	for (int i = 0; i < 9; i++)
//	{
//		min = 10;
//		for (int j = i; j < 9; j++)
//		{
//			if (min > array[j])
//			{
//				min = array[j];
//				index = j;
//			}
//		}
//		temp = array[i];
//		array[i] = array[index];
//		array[index] = temp;
//		// 위 3개의 소스코드를 합쳐 스와핑한다고 말함
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		cout << array[i] << " ";
//	}
//	return 0;
//}

//버블정렬
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int temp;
//	int array[9] = { 1, 7, 3, 5, 8, 6, 9, 2, 4 };
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 8 - i; j++)
//		{
//			if (array[j] > array[j+1])
//			{
//				temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		cout << array[i] << " ";
//	}
//	return 0;
//}

//삽입정렬
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int temp;
//	int array[9] = { 1, 7, 3, 5, 8, 6, 9, 2, 4 };
//	for (int i = 0; i < 8; i++)
//	{	
//		int j = i;
//		while (array[j] > array[j + 1])
//		{
//			temp = array[j];
//			array[j] = array[j + 1];
//			array[j + 1] = temp;
//			j--;
//		}
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		cout << array[i] << " ";
//	}
//	return 0;
//}

//퀵정렬
#include <iostream>
int number = 10;
int data[10] = { 3,7,8,1,5,9,6,10,2,4 };

void quick_sort(int *data, int first_num, int last_num)
{
	if (first_num >= last_num)
	{
		return;
	}
	int key = first_num;
	int i = first_num + 1;
	int j = last_num;
	int temp;

	while (i <= j)
	{
		while (data[i] <= data[key])
		{
			i++;
		}
		while (data[j] >= data[key] && j > first_num)
		{
			j--;
		}
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else
		{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	quick_sort(data, first_num, j - 1);
	quick_sort(data, j + 1, last_num);
}

int main()
{
	quick_sort(data, 0, number - 1);
	for (int i = 0; i < number; i++)
	{
		std::cout << data[i] << " ";
	}
	return 0;
}