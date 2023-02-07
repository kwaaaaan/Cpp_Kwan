// 파일 쓰기
#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
// input file stream -> ifstream --> 파일 to 프로그램
// output file stream -> ofstream --> 프로그램 to 파일, (만약 파일에 쓰기권한이 없으면 안됨)
bool check_file_open(std::ifstream &file)
{
	if (file.fail())
	{
		std::cout << "파일 없음" << std::endl;
		return false;
	}
	else return true;
}

int main(void)
{
	std::string line, file_content = "";
	std::ifstream file_read("text.txt");

	if (!check_file_open(file_read)) return -1;
	while (std::getline(file_read, line)) //getline은 string library에 있음
	{
		file_content += line + "\n"; //file_content = file_content + line + "\n"
	}
	std::cout << file_content << std::endl;
/*	std::ofstream file("text1.txt"); //파일 여는 방법2
	//file.open(""); //파일 여는 방법
	if (file.fail())
	{
		std::cout <<"파일 없음"<<std::endl;
		return -1; //0은 성공을 의미
	}
	file << "hello world!\nhihi"; // file 쓰기(덮어쓰기만 가능)
*/
	std::ofstream file("text1.txt", std::ios::out | std::ios::trunc);
	// ios::trunc까지 있는것은 덮어쓰기임, default값

	//std::ofstream file("text1.txt", std::ios::out | std::ios::app);
	// 파일을 덮어쓰는게 아닌 뒤에 추가
	//file << "hello world!\nhihi";
	
	return 0;

}
