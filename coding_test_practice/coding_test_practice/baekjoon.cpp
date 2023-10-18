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
//    // 모든 거듭제곱의 경우를 저장
//    for (int base = 2; base <= n; base++) {
//        for (int exponent = 2; exponent <= n; exponent++) {
//            powers.push_back(Power(base, exponent));
//        }
//    }
//
//    // 오름차순으로 정렬
//    sort(powers.begin(), powers.end(), comparePower);
//
//    // n번째로 작은 거듭제곱의 형태 반환
//    return powers[n - 1].value;
//}
//
//int main() {
//    int n;
//    cout << "n을 입력하세요: ";
//    cin >> n;
//
//    long long result = findNthPower(n);
//    cout << n << "번째로 작은 거듭제곱의 형태: " << result << endl;
//
//    return 0;
//}

//softeer 성적평가


