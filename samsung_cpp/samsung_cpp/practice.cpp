#include <iostream>
#include <vector>

int main() {
    // 1���� ���� �迭 e�� �����մϴ�.
    std::vector<int> e[1001];

    // ������ �� ���� ���Ҹ� �߰��մϴ�.
    e[0].push_back(42);  // e[0]�� 42�� �߰�

    // e[0] ���� ���
    std::cout << "e[0]�� ����: ";
    for (int i = 0; i < e[0].size(); i++) {
        std::cout << e[0][i] << " ";
    }
    std::cout << std::endl;

    return 0;
}