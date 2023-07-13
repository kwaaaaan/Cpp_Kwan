#include <iostream>
#include <string>

int main()
{
    std::string grade;
    double sum = 0.0;
    int count = 0;

    std::cout << "X를 입력면 계산이 완료되며 프로그램이 종료됩니다.\n";
    while (true)
    {
        std::cout << "학점을 입력하세요 : ";
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
            // 잘못된 학점이 입력되면 입력 루프를 종료합니다.
            break;
        }

        count++; // 입력된 학점 수를 증가시킵니다.
    }

    double avg = sum / count; // 평균 계산

    std::cout << "평균 학점: " << avg << std::endl;

    return 0;
}
