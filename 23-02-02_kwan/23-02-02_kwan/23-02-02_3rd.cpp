//#include <iostream>
//
//int functionTestInt() {
//	return 5;
//}
//
//double functionTestDouble() {
//	return 5.4;
//}
//
//std::string functionStr() {
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//
//	return "hello";
//}
//
//int functionTestSum(int n1, int n2) {
//	return n1 + n2;
//}
//
// 사칙연산하는 함수
//
//
//void functionTestVoid(int n1, int n2, std::string op) {
//	int result;
//	if (op == "+") {
//		result = n1 + n2;
//	}
//	else if (op == "-") {
//		result = n1 - n2;
//	}
//
//	std::cout << result;
//}
//
//int functionTestSum(int n1, int n2, std::string op) {
//	int result;
//	if (op == "+") {
//		result = n1 + n2;
//	}
//	else if (op == "-") {
//		result = n1 - n2;
//	}
//
//	return result;
//}
//
//int main() {
//	functionTestVoid(2, 3, "+");
//	functionTestVoid(3, 4, "+");
//
//	int result = functionTestSum(2, 3, "+");
//	int result2 = functionTestSum(result, 4, "+");
//
//	std::cout << result + result2;
//
//
//	int num = functionTestSum(2, 3); // 5
//	num = 5;
//	std::cout << num << std::endl;
//	std::cout << functionTestSum(4, 7);
//
//	return 0;
//}
//흰색_확인_표시
//두_눈
//두_손을_들고_있는_사람
//
//
//
//
//
//새 항목
//
//
//Lily
//오후 4:33
//#include <iostream>
//
//int functionTestInt();
//double functionTestDouble();
//std::string functionStr();
//void functionTestVoid(int, int, std::string);
//int functionTestSum(int, int, std::string);
//int functionTestSum(int, int);
//
//int main() {
//	functionTestVoid(2, 3, "+");
//	functionTestVoid(3, 4, "+");
//
//	int result = functionTestSum(2, 3, "+");
//	int result2 = functionTestSum(result, 4, "+");
//
//	std::cout << result + result2 << std::endl;
//
//
//	int num = functionTestSum(2, 3); // 5
//	num = 5;
//	std::cout << num << std::endl;
//	std::cout << functionTestSum(4, 7);
//
//	return 0;
//}
//
//int functionTestSum(int n1, int n2) {
//	return n1 + n2;
//}
//
//int functionTestSum(int n1, int n2, std::string op) 
// {
//	int result = 0;
//	if (op == "+") 
// {
//		result = n1 + n2;
//	}
//	else if (op == "-") 
// {
//		result = n1 - n2;
//	}
//
//	return result;
//}
//
//void functionTestVoid(int n1, int n2, std::string op) {
//	int result = 0;
//	if (op == "+") {
//		result = n1 + n2;
//	}
//	else if (op == "-") {
//		result = n1 - n2;
//	}
//
//	std::cout << result << std::endl;
//}
//
//std::string functionStr() {
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//
//	return "hello";
//}
//
//double functionTestDouble() {
//	return 5.4;
//}
//
//int functionTestInt() {
//	return 5;
//}
//// 
////강제 형변환, 기본자료형만 가능
// double divide(int n1, int n2) 
//{
//	return (double) n1 / (double) n2;
//}