// �ǽ� 1 �迭 ����غ���
// 1. city��� �迭 ������ �����, 5���� ���� �̸��� ������ ����. 2. for�� Ȥ�� for-each���� Ȱ���Ͽ� city ���� ��� ���Ҹ� ���

// �ǽ� 2 �迭 Ȱ���ϱ�
// 1. grade��� �迭 ������ �����ϰ�, �л� 5���� ���� �Է¹ޱ�. 2. for�� Ȥ�� for-each���� Ȱ���Ͽ� 5���� ���� ��� ����
#include <iostream>
#include <string>
int main(void)
{
	//�ǽ� 1
	/*std::string city[5] = {"korea", "america", "japan", "germany", "china"};
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		std::cout << city[i] << std::endl;
	}
	*/

	//�ǽ�2

	int i;
	double sum = 0;
	int grade[5] = { 1, 2, 3, 4, 5 };

	for (i = 0; i < 5; i++)
	{
		std::cout << grade[i] << "�� �л�" << "�� ������ �Է��ϼ���" << std::endl;
		std::cin >> grade[i];
		sum = sum + grade[i];

	}
	std::cout << "�л����� ��� ������" << sum/5 << "�Դϴ�" << std::endl;

	return 0;
}