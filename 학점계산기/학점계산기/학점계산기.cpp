#include <iostream>
#include <string>

int main()
{
    std::string grade;
    double sum = 0.0;
    int count = 0;

    std::cout << "X�� �Է¸� ����� �Ϸ�Ǹ� ���α׷��� ����˴ϴ�.\n";
    while (true)
    {
        std::cout << "������ �Է��ϼ��� : ";
        std::cin >> grade;
        std::cout << "\n";

        if (grade == "A+" || grade == "a+")
        {
            sum += 4.5;
        }
        else if (grade == "A" || grade == "a")
        {
            sum += 4.0;
        }
        else if (grade == "B+" || grade == "b+")
        {
            sum += 3.5;
        }
        else if (grade == "B" || grade == "b")
        {
            sum += 3.0;
        }
        else if (grade == "C+" || grade == "c+")
        {
            sum += 2.5;
        }
        else if (grade == "C" || grade == "c")
        {
            sum += 2.0;
        }
        else if (grade == "D+" || grade == "d+")
        {
            sum += 1.5;
        }
        else if (grade == "D" || grade == "d")
        {
            sum += 1.0;
        }
        else if (grade == "F")
        {
            sum += 0.0;
        }
        else if (grade == "X" || grade == "x")
        {
            // �߸��� ������ �ԷµǸ� �Է� ������ �����մϴ�.
            break;
        }

        count++; // �Էµ� ���� ���� ������ŵ�ϴ�.
    }

    double avg = sum / count; // ��� ���

    std::cout << "��� ����: " << avg << std::endl;

    return 0;
}
