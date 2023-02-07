#include <iostream>
int main(void)
//
//{
//	//int num;
//	//std::cin >> num;
//	//int num_array[]; //<< 오류 남!
//
//	int* p; // 포인터로 변수선언
//	int n = 5; //n을 5로 초기화
//	p = &n; // p의 메모리 주소를 담아둠
//
//	std::cout << p << std::endl;
//	std::cout << n << std::endl;
//	std::cout << &n << std::endl;
//	std::cout << *p << std::endl; // p에다가 할당된 값이 나오기 됨
//
//	n = 20;
//	std::cout << p << std::endl;
//	std::cout << *p << std::endl;
//
//	*p = 30;
//	std::cout << n << std::endl;
//	std::cout << *p << std::endl;
//	
//	// '&는 주소의 변수를 찾아가라는 뜻', *p
// delete p; //메모리 반납
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
//	delete[] num_array; //동적 메모리 반납
//
//	return 0;
//}
//{
//	//num을 받아서, num x num 배열을 만들거임
//	// *동적배열에서는 for each문 사용 불가*
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
//	//동적배열 해제
//	for (int i = 0; i < num; i++)
//	{
//		delete[] num_array[i];
//	}
//	delete[] num_array;
//
//	//vector의 개념이 추가되면서 메모리 할당을 반자동으로 할 수 있음.
//
//	return 0;
//}
//사용자로부터 x,y 2개의 자연수를 입력받기, 만약 사용자가 x와 y에 0이나 음수를 입력한다면 에러메세지를 출력 후 다시 입력받기
// x*y의 크기를 갖는 이차원 동적배열 arr을 선언
// arr[0][0]부터 arr[x][y]까지 순서대로 1부터 x*y 저장
// arr[0][0]부터 arr[x][y]까지 저장된 값 출력
//
//{
//	int x, y;
//	std::cout << "x를 입력하세요 : " << std::endl;
//	std::cin >> x;
//	
//	std::cout << "y를 입력하세요 : " << std::endl;
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
//		std::cout << "양수를 입력하세요" << std::endl;
//	}
//
//
//	return 0;
//}


// 실습 1
{
	int x, y;

	while (1)
	{
		std::cout << "x를 입력하세요 : " << std::endl;
		std::cin >> x;
		std::cout << "y를 입력하세요 : " << std::endl;
		std::cin >> y;
		if (x > 0 && y > 0) break;
		else std::cout << "양수를 입력하세요" << std::endl;
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