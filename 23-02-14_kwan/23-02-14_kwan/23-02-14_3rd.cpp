//Random�Լ� �����, ��������
//�ζǹ�ȣ ��÷�ϱ� ������ ���� �� ����
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	int n = 0;
	int lotto_ary[6] = {};

	std::srand(time(NULL));						//����ð��� �ʴ����� ������� ��, NULL�� ���� �������ڰ� ���� �� ����
	//std::srand(3);							//srand�� �߰��Ͽ� ���� ���ڸ��� Random�ϰ� �ٸ����ڰ� ������ �ϱ�
	int num = std::rand();						//Random ���� ������ �ϱ� but ó���� ���� ���ڰ� ������ ���´�
	
	//0-25������ ������ ���					//0~25������ ������ ����ϰ� ������
	int random_num = num % 25 + 1;				// 25�� ���� �������� 0~24���� ������ �ǰ�, �ű�� +1�� ���ָ� 0-25������ ������ �����Ե�
												// --> ���ϴ� ������ ���� �� �ִ� ���
	//std::cout << num << std::endl;
	//std::cout << random_num << std::endl;

	for (int i = 0; i < 6; i++)
	{
		lotto_ary[i] = num % 46;
		int a = lotto_ary[i];
		for (int j = 0; j < 6; j++)
		{
			if (lotto_ary[j] == a)
			{
				i--;
			}
			std::cout << lotto_ary[i] << std::endl;
		}


	}
	return 0;
}