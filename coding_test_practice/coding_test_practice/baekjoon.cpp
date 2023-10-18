//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//struct Power {
//    int base;
//    int exponent;
//    long long value;
//
//    Power(int b, int e) {
//        base = b;
//        exponent = e;
//        value = static_cast<long long>(pow(b, e));
//    }
//};
//
//bool comparePower(const Power& a, const Power& b) {
//    return a.value < b.value;
//}
//
//long long findNthPower(int n) {
//    vector<Power> powers;
//
//    // ��� �ŵ������� ��츦 ����
//    for (int base = 2; base <= n; base++) {
//        for (int exponent = 2; exponent <= n; exponent++) {
//            powers.push_back(Power(base, exponent));
//        }
//    }
//
//    // ������������ ����
//    sort(powers.begin(), powers.end(), comparePower);
//
//    // n��°�� ���� �ŵ������� ���� ��ȯ
//    return powers[n - 1].value;
//}
//
//int main() {
//    int n;
//    cout << "n�� �Է��ϼ���: ";
//    cin >> n;
//
//    long long result = findNthPower(n);
//    cout << n << "��°�� ���� �ŵ������� ����: " << result << endl;
//
//    return 0;
//}

//softeer ������


