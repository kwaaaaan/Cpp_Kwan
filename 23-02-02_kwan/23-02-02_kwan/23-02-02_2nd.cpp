////return���� �ִ°��
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
//	int num = function_test(); // function_test�� 5��
//	//num = 5��� ����, return���� ������ ������ ������ ����
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
//	std::cout << "�ȳ��ϼ���" << std::endl;
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
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//
//	return "hello";
//}
//
//int functiontestsum(int n1, int n2) {
//	return n1 + n2;
//}
//
// //��Ģ�����ϴ� �Լ�
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
////�Լ��� �������� �ȶ��ؼ�, �Ű����� 3��¥���� ȣ���ϸ� �Լ��� �̸��� ���Ƶ� �˾Ƽ� �Ű����� 3��¥���� ȣ���ؿ´�.