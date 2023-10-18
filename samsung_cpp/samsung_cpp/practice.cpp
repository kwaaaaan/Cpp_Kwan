#include <iostream>
#include <vector>

int main() {
    // 1차원 벡터 배열 e를 생성합니다.
    std::vector<int> e[1001];

    // 예제로 몇 개의 원소를 추가합니다.
    e[0].push_back(42);  // e[0]에 42를 추가

    // e[0] 벡터 출력
    std::cout << "e[0]의 내용: ";
    for (int i = 0; i < e[0].size(); i++) {
        std::cout << e[0][i] << " ";
    }
    std::cout << std::endl;

    return 0;
}