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
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//
//	return "hello";
//}
//
//int functionTestSum(int n1, int n2) {
//	return n1 + n2;
//}
//
// ��Ģ�����ϴ� �Լ�
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
//���_Ȯ��_ǥ��
//��_��
//��_����_���_�ִ�_���
//
//
//
//
//
//�� �׸�
//
//
//Lily
//���� 4:33
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
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
//	std::cout << "�ȳ��ϼ���";
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
////���� ����ȯ, �⺻�ڷ����� ����
// double divide(int n1, int n2) 
//{
//	return (double) n1 / (double) n2;
//}