////return값이 있는경우
//
//#include <iostream>
//int function_test()
//{
//	return 5;
//}
//int function_test_sum(int n1, int n2)
//{
//	return n1+n2;
//}
//int function_test_int()
//{
//	return 4;
//}
//double function_test_double()
//{
//	return 5.4;
//}
//
//int main(void)
//{
//	int num = function_test(); // function_test가 5임
//	//num = 5라는 뜻임, return값이 있으면 보통은 변수에 담음
//	
//	int num_1 = function_test_sum(4,7);
//	std::cout << num_1;
//
//	int a = function_test_int();
//
//	double b = function_test_double();
//
//
//	return 0;
//}
//
//#include <iostream>
//void function_test_noreturn()
//{
//	std::cout << "안녕하세요" << std::endl;
//}
//
//int main(void)
//{
//	function_test_noreturn();
//}
//
//#include <iostream>
//
//int functiontestint() {
//	return 5;
//}
//
//double functiontestdouble() {
//	return 5.4;
//}
//
//std::string functionstr() {
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//	std::cout << "안녕하세요";
//
//	return "hello";
//}
//
//int functiontestsum(int n1, int n2) {
//	return n1 + n2;
//}
//
// //사칙연산하는 함수
//
//
//void functiontestvoid(int n1, int n2, std::string op) {
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
//int functiontestsum(int n1, int n2, std::string op) {
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
//	functiontestvoid(2, 3, "+");
//	functiontestvoid(3, 4, "+");
//
//	int result = functiontestsum(2, 3, "+");
//	int result2 = functiontestsum(result, 4, "+");
//
//	std::cout << result + result2;
//
//
//	int num = functiontestsum(2, 3); // 5
//	num = 5;
//	std::cout << num << std::endl;
//	std::cout << functiontestsum(4, 7);
//
//	return 0;
//}
////함수는 생각보다 똑똑해서, 매개변수 3개짜리로 호출하면 함수의 이름이 같아도 알아서 매개변수 3개짜리를 호출해온다.