// ���� ����
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream --> ���� to ���α׷�
// output file stream -> ofstream --> ���α׷� to ����, (���� ���Ͽ� ��������� ������ �ȵ�)
bool check_file_open(std::ifstream &file)
{
	if (file.fail())
	{
		std::cout << "���� ����" << std::endl;
		return false;
	}
	else return true;
}

int main(void)
{
	std::string line, file_content = "";
	std::ifstream file_read("text.txt");

	if (!check_file_open(file_read)) return -1;
	while (std::getline(file_read, line)) //getline�� string library�� ����
	{
		file_content += line + "\n"; //file_content = file_content + line + "\n"
	}
	std::cout << file_content << std::endl;
/*	std::ofstream file("text1.txt"); //���� ���� ���2
	//file.open(""); //���� ���� ���
	if (file.fail())
	{
		std::cout <<"���� ����"<<std::endl;
		return -1; //0�� ������ �ǹ�
	}
	file << "hello world!\nhihi"; // file ����(����⸸ ����)
*/
	std::ofstream file("text1.txt", std::ios::out | std::ios::trunc);
	// ios::trunc���� �ִ°��� �������, default��

	//std::ofstream file("text1.txt", std::ios::out | std::ios::app);
	// ������ ����°� �ƴ� �ڿ� �߰�
	//file << "hello world!\nhihi";
	
	return 0;

}
