#/*include<iostream>

int main(void)
{
    int a;
    std::cin >> a;
    for (int i = 1; i <= 9; i++)
    {
        std::cout << a << '*' << i << '=' << a * i << std::endl;
    }

    return 0;
}*/

/*#include<iostream>
int main(void)
{
    
    int a, b, t;

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
    return 0;
}*/

//#include<iostream>
//int main(void)
//{
//    int n;
//    int sum = 0;
//    std::cin >> n; 
//    for (int i = 0; i < n; i++) //for문을 i<=n까지 하면 std::cout << sum만 하면됨
//    {
//        sum = i + sum;
//    }
//    std::cout << sum + n;
//    return 0;
//}

//#include<iostream>
//
//int main(void)
//{
//    int all_cost, all_product;
//    int cost, product, sum =0;
//    std::cin >> all_cost;
//    std::cin >> all_product;
//    for (int i = 0; i < all_product; i++)
//    {
//        std::cin >> cost;
//        std::cin >> product;
//        sum = (cost * product) + sum;
//    }
//    if (sum == all_cost)
//    {
//        std::cout << "Yes";
//    }
//    else
//    {
//        std::cout << "No";
//    }
//    return 0;
//}

//#include<iostream>
//#include<string>
//
//int main(void)
//{
//    int n;
//    std::cin >> n;
//    if (n == 1)
//    {
//        std::cout << "long" << " ";
//    }
//    else
//    {
//        {
//        for (int i = 1; i <= n / 4; i++)
//
//            std::cout << "long" << " ";
//        }
//    }
//    std::cout << "int";
//    return 0;
//}

//#include <iostream>
//int main(void)
//{
//    std::cin.tie(NULL);
//    std::ios_base::sync_with_stdio(false);
//
//    int a, b, c;
//    std::cin >> c;
//    for (int i = 1; i <= c; i++)
//    {
//        std::cin >> a >> b;
//        std::cout << a + b << '\n';
//    }
//    return 0;
//}

//#include<iostream>
//int main(void)
//{
//    int a, b;
//    int count = 0;
//    std::cin >> a;
//    int* N = new int[a];
//    for (int i = 0; i < a; i++)
//    {
//        std::cin >> N[i];
//    }
//    std::cin >> b;
//    for (int i = 0; i < a; i++)
//    {
//        if (N[i] == b)
//        {
//            count++;
//        }
//    }
//    std::cout << count;
//}

//#include <iostream>
//int main(void)
//{
//    std::string city[] = { "seoul","busan","kangwon" };
//    for (int i = 0; i <= 2; i++)
//    {
//        std::cout << city[i] << "\n";
//    }
//    return 0;
//}
//
//
//#include <iostream>
//int main(void)
//{
//    std::string grade[] = { "","","" };
//    int score;
//    double sum = 0;
//    for (int i = 1; i < 4; i++)
//    {
//        std::cout << i <<"번 학생 성적은?";
//        std::cin >> score;
//        sum = score + sum;
//    }
//    std::cout << "성적 평균 : " << sum/(sizeof(grade)/sizeof(grade[0]));
//    return 0;
//}
//
//#include<iostream>
//
//int main(void)
//{
//    int n2;
//    std::cout << "숫자를 입력하세요: ";
//    std::cin >> n2;
//
//    int* arr = new int[n2];
//    for (int i = 0; i < n2; i++)
//    {
//        arr[i] = i + 1;
//    }
//    delete[] arr;
//    return 0;
//}

//#include <iostream>
//int main(void)
//{
//    int n,x; // n: 배열의 크기, x: 지정할 정수
//    std::cin >> n >> x;
//    int* a = new int[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        std::cin >> a[i];
//        if (a[i] < x)
//        {
//            std::cout << a[i] << " ";
//        }
//    }
//    delete[] a;
//    return 0;
//}

//#include <iostream>
//int main(void)
//{
//    int n, x;
//    std::cin >> n >> x;
//    int a[1000];
//
//    for (int i = 0; i < n; i++)
//    {
//        std::cin >> a[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] < x)
//        {
//            std::cout << a[i] << " ";
//        }
//
//    }
//
//    return 0;
//}

// N개의 정수가 주어지고, 최솟갑과 최댓값을 구하는 프로그램
// 입력 5 -> 20 10 35 30 7
// 출력 7 35
//#include <iostream>
//int main(void)
//{
//    int n, x;
//    std::cin >> n;
//    int* arr = new int[n];
//    for (int i = 0; i < n; i++)
//    {
//        std::cin >> arr[i];
//    }
//    int min = arr[0];
//    int max = arr[0];
//
//    for (int i = 1; i < n; i++)
//    {
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//
//    std::cout << min << " " << max;
//
//    delete[] arr;
//    return 0;
//}
//
//// N개의 정수가 주어지고, 최솟갑과 최댓값을 구하는 프로그램
//// 입력 5 -> 20 10 35 30 7
//// 출력 7 35
//#include <iostream>
//int main(void)
//{
//    int n, a, b;
//    std::cin >> n;
//    int* arr = new int [n];
//
//    for (int i = 0; i < n; i++)
//    {
//        std::cin >> arr[i];
//    }
//    int min = arr[0];
//    int max = arr[0];
//
//    for (int i = 1; i < n; i++)
//    {
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }   
//    return 0;
//}


// 관장들을 이기려면 관장들보다 레벨이 높아야 함
// 너무 자주찾는 지원자들때문에 레벨제한을 x로 둠 --> x레벨 이하 지원자는 오지 마시오
//// 
//#include<iostream>
//int main(void)
//{
//    
//    return 0;
//}

//#include <iostream>
//
//int change_val(int* p)
//{
//    *p = 3;
//    return 0;
//}
//
//int main()
//{
//
//}

//#include <iostream>
//#include <vector>
//std::vector<int> v;
//std::vector<int> v[10];

//#include<iostream>
//int main(void)
//{
//    std::string input;
//    std::string id[] = { "joonas", "baekjoon" };
//    std::cin >> input;
//    if (id[0] == input || id[1] == input)
//    {
//        std::cout << input << "??!";
//    }
//    return 0;
//}

//#include<iostream>
//int main(void)
//{
//    std::string input_id;
//    std::cin >> input_id;
//    std::cout << input_id << "??!";
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <climits>
//
//using namespace std;
//
//const int MAX_LEVEL = 1000000000;  // 최대 레벨 상수
//
//struct Edge {
//    int destination;
//    int level;
//};
//
//vector<vector<Edge>> graph;
//vector<bool> visited;
//
//bool isPrime(int num) {
//    if (num < 2) return false;
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int findMinLevel(int start, int end) {
//    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//    vector<int> minLevel(graph.size(), MAX_LEVEL);
//
//    pq.push(make_pair(0, start));
//    minLevel[start] = 0;
//
//    while (!pq.empty()) {
//        int currNode = pq.top().second;
//        int currLevel = pq.top().first;
//        pq.pop();
//
//        if (currNode == end) return currLevel;
//
//        if (visited[currNode]) continue;
//        visited[currNode] = true;
//
//        for (const Edge& edge : graph[currNode]) {
//            int nextNode = edge.destination;
//            int nextLevel = edge.level;
//
//            if (minLevel[nextNode] > currLevel + nextLevel) {
//                minLevel[nextNode] = currLevel + nextLevel;
//                pq.push(make_pair(minLevel[nextNode], nextNode));
//            }
//        }
//    }
//
//    return -1;  // 마지막 포켓몬 리그까지 갈 수 없는 경우
//}
//
//int main() {
//    int N, M;
//    cin >> N >> M;
//
//    graph.resize(N + 1);
//    visited.resize(N + 1, false);
//
//    for (int i = 0; i < M; i++) {
//        int A, B, C;
//        cin >> A >> B >> C;
//        graph[A].push_back({ B, C });
//        graph[B].push_back({ A, C });
//    }
//
//    int minLevel = findMinLevel(1, N);
//
//    // 최소한의 레벨을 소수에 맞추기 위해 조정
//    while (!isPrime(minLevel)) {
//        minLevel++;
//    }
//
//    cout << minLevel << endl;
//
//    return 0;
//}
//
// 알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램
// 입력: pulljima 출력: 8
//#include <iostream>
//#include <string>
//int main(void)
//{
//    std::string c;
//    std::cin >> c;
//    std::cout << c.length(); // 문자길이를 숫자로 표현
//
//    return 0;
//}
// 문자열을 입력으로 주면 문자열의 첫 글자와 마지막 글자를 출력하는 프로그램을 작성
// 입력: 3 ACDKJFOWIEGHE 0O AB 출력: AE OO AB
//#include <iostream>
//#include <string>
//#include <vector>
//
//int main(void) {
//    std::vector<std::string> inputs;
//    int a;
//
//    std::cin >> a;
//    for (int i = 0; i < a; i++) {
//        std::string c;
//        std::cin >> c;
//        inputs.push_back(c);
//    }
//
//    // 입력된 모든 값 출력
//    for (const std::string& input : inputs) {
//        if (input.length() == 1)
//        {
//            std::cout << input[0] << "\n";
//        }
//        else
//        {
//            std::cout << input[0] << input[input.length() - 1] << '\n';
//        }
//    }
//
//    return 0;
//}
//
//#include<iostream>
//int main(void)
//{
//    int a, b;
//    std::cin >> a;
//    for (int i = 0; i < a; i++)
//    {
//
//    }
//    return 0;
//}

//#include<iostream>
//#include<string>
//int main(void)
//{
//    std::string iban;
//    std::cin >> iban;
//
//    std::string modifiedIBAN = iban.substr(4) + iban.substr(0, 4);
//    std::string iban_digits = "";
//
//    for (size_t i = 0; i < modifiedIBAN.length(); i++)
//    {
//        char c = modifiedIBAN[i];
//
//        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//        {
//            int digit = (c & 31) + 9;
//            iban_digits += std::to_string(digit);
//        }
//        else
//        {
//            iban_digits += c;
//        }
//    }
//
//    int remainder = 0;
//    for (size_t i = 0; i < iban_digits.length(); i++) 
//    {
//        remainder = (remainder * 10 + (iban_digits[i] - '0')) % 97;
//    }
//
//    if (remainder == 1)
//    {
//        std::cout << "correct";
//    }
//    else
//    {
//        std::cout << "incorrect";
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//bool compare(const std::string& x, const std::string& y)
//{
//    return x + y > y + x;
//}
//
//int main()
//{
//    std::string input;
//    std::getline(std::cin, input);
//
//    std::vector<int> narr;
//    size_t pos = 0;
//    std::string token;
//    while ((pos = input.find(',')) != std::string::npos)
//    {
//        token = input.substr(0, pos);
//
//        int n = std::stoi(token);
//        narr.push_back(n);
//
//        input.erase(0, pos + 1);
//    }
//    int n = std::stoi(input);
//    narr.push_back(n);
//
//    std::vector<std::string> nstr;
//    for (int n : narr)
//    {
//        nstr.push_back(std::to_string(n));
//    }
//    std::sort(nstr.begin(), nstr.end(), compare);
//
//    std::string ans;
//    for (const std::string& ns : nstr)
//    {
//        ans += ns;
//    }
//    if (ans.empty())
//    {
//        std::cout << "ERROR" << std::endl;
//    }
//    else
//    {
//        std::cout << ans << std::endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <sstream>
//
//bool compare(double a, double b) 
//{
//    if (a < 0 && b < 0)
//    {
//        return a > b; 
//    }
//    else if (a < 0) 
//    {
//        return true;
//    }
//    else if (b < 0) 
//    {
//        return false;
//    }
//    else 
//    {
//        return a < b;
//    }
//}
//
//void insertionSort(std::vector<double>& numbers) 
//{
//    for (int i = 1; i < numbers.size(); ++i) 
//    {
//        double key = numbers[i];
//        int j = i - 1;
//        while (j >= 0 && compare(key, numbers[j])) 
//        {
//            numbers[j + 1] = numbers[j];
//            j = j - 1;
//        }
//        numbers[j + 1] = key;
//    }
//}
//
//int main() {
//    std::vector<double> numbers;
//    std::string input;
//
//    std::cout << "실수를 입력하세요 (구분은 콤마로): ";
//    std::getline(std::cin, input);
//
//    size_t pos = 0;
//    std::string token;
//    while ((pos = input.find(",")) != std::string::npos) 
//    {
//        token = input.substr(0, pos);
//        numbers.push_back(std::stod(token));
//        input.erase(0, pos + 1);
//    }
//    numbers.push_back(std::stod(input));
//
//    insertionSort(numbers);
//
//    std::cout << "정렬된 실수: ";
//    for (const auto& number : numbers) 
//    {
//        std::cout << number << " ";
//    }
//    std::cout << std::endl;
//
//    return 0;
//}
//#include <iostream>
//int main(void)
//{
//    int input_number1, input_number2;
//    std::cin >> input_number1;
//    std::cin >> input_number2;
//    if (input_number1 > input_number2)
//    {
//        std::cout << ">";
//    }
//    else if (input_number1 < input_number2)
//    {
//        std::cout << "<";
//    }
// 
//    else
//    {
//        std::cout << "==";
//    }
//    return 0;
//}
//#include <iostream>
//
//int main(void)
//{
//    std::string input_ASCII;
//    int output_ASCII;
//    std::cin >> input_ASCII;
//    output_ASCII = static_cast<int>(input_ASCII[0]);
//
//    std::cout << output_ASCII;
//    return 0;
//}
//중요**************
//#include <iostream>
//int main(void)
//{
//    int nof_number, sum = 0;
//    std::string input_num;
//
//    std::cin >> nof_number >> input_num;
//    for (int i = 0; i < nof_number; i++){
//        int num = input_num[i] - '0'; //ASCII로 표현되는 string값때문에 - '0'을 해줘야 함
//        sum += num;
//    }
//    std::cout << sum;
//    return 0;
//}
//#include <iostream>
//#include <vector>
//int main(void)
//{
//    std::string S;
//    std::cin >> S;
//    std::vector<int> positions(26, -1);
//
//    for (int i = 0; i < S.length(); i++)
//    {
//        int index = S[i] - 'a';
//        if (positions[index] == -1)
//        {
//            positions[index] = i;
//        }
//    }
//    for (int i = 0; i < positions.size(); i++)
//    {
//        std::cout << positions[i] << ' ';
//    }
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//int main(void)
//{
//    int repeat;
//    std::cin >> repeat;
//
//    for (int i = 0; i < repeat; i++)
//    {
//        int R;
//        std::string S;
//        std::cin >> R >> S;
//
//        std::string P;
//        for (int j = 0; j < S.length(); j++)
//        {
//            P += std::string(R, S[j]);
//        }
//        std::cout << P << std::endl;
//    }
//    
//    return 0;
//}

//#include <iostream>
//#include <string>
//int main(void)
//{
//    std::string input_string;
//    int count = 1;
//    int sum = 0;
//    std::getline(std::cin, input_string);
//
//    for (char c : input_string)
//    {
//        if (input_string[0] == ' ' && input_string.size() == 1)
//        {
//            if (c == ' ')
//            {
//                sum = 0;
//            }
//        }
//        else if (input_string[0] == ' ' && input_string[input_string.length() - 1] == ' ')
//        {
//            if (c == ' ')
//            {
//                count++;
//                sum = count -2;
//            }
//        }
//        else if (input_string[input_string.length() - 1] == ' ')
//        {
//            if (c == ' ')
//            {
//                count++;
//                sum = count - 1;
//            }
//        }
//        else if (input_string[0] == ' ')
//        {
//            if (c == ' ')
//            {
//                count++;
//                sum = count - 1;
//            }
//        }
//        else if (c == ' ')
//        {
//            count++;
//            sum = count;
//        }
//
//    }
//    std::cout << sum;
//    return 0;
//}

//#include <iostream>
//#include <string>
//
//int main() {
//    std::string input_string;
//    int count = 0;
//    std::getline(std::cin, input_string);
//
//    bool prev_char_is_space = true;  // 이전 문자가 공백인지 확인하기 위한 플래그
//
//    for (char c : input_string) 
//    {
//        if (c == ' ') 
//        {
//            prev_char_is_space = true;  // 현재 문자가 공백이면 플래그를 설정
//        }
//        else 
//        {
//            if (prev_char_is_space) 
//            {
//                count++;  // 이전 문자가 공백이고 현재 문자가 공백이 아닌 경우에만 단어로 처리하여 count 증가
//            }
//            prev_char_is_space = false;  // 플래그를 초기화
//        }
//    }
//
//    std::cout << count << std::endl;
//    return 0;
//}

//#include <iostream>
//
//int main()
//{
//    std::string A, B;
//    std::cin >> A >> B;
//    std::string reverse_A, reverse_B;
//
//    for (int i = 2; i >= 0; i--)
//    {
//        reverse_A += A[i];
//        reverse_B += B[i];
//    }
//    if (reverse_A > reverse_B)
//    {
//        std::cout << reverse_A;
//    }
//    else
//    {
//        std::cout << reverse_B;
//    }
//    return 0;
//}

//#include <iostream>
//int main()
//{
//    std::string push_botton;
//    int output = 0;
//    std::cin >> push_botton;
//    for (int i = 0; i < push_botton.size(); i++)
//    {
//        if (push_botton[i] == 'A' || push_botton[i] == 'B' || push_botton[i] == 'C')
//        {
//            output += 3;
//        }
//        else if (push_botton[i] == 'D' || push_botton[i] == 'E' || push_botton[i] == 'F')
//        {
//            output += 4;
//        }
//        else if (push_botton[i] == 'G' || push_botton[i] == 'H' || push_botton[i] == 'I')
//        {
//            output += 5;
//        }
//        else if (push_botton[i] == 'J' || push_botton[i] == 'K' || push_botton[i] == 'L')
//        {
//            output += 6;
//        }
//        else if (push_botton[i] == 'M' || push_botton[i] == 'N' || push_botton[i] == 'O')
//        {
//            output += 7;
//        }
//        else if (push_botton[i] == 'P' || push_botton[i] == 'Q' || push_botton[i] == 'R' || push_botton[i] == 'S')
//        {
//            output += 8;
//        }
//        else if (push_botton[i] == 'T' || push_botton[i] == 'U' || push_botton[i] == 'V')
//        {
//            output += 9;
//        }
//        else if (push_botton[i] == 'W' || push_botton[i] == 'X' || push_botton[i] == 'Y' || push_botton[i] == 'Z')
//        {
//            output += 10;
//        }
//    }
//    std::cout << output;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string push_botton;
//    cin >> push_botton;
//
//    int output = 0;
//
//    for (int i = 0; i < push_botton.size(); i++) {
//        if (push_botton[i] >= 'A' && push_botton[i] <= 'C') {
//            output += 3;
//        }
//        else if (push_botton[i] >= 'D' && push_botton[i] <= 'F') {
//            output += 4;
//        }
//        else if (push_botton[i] >= 'G' && push_botton[i] <= 'I') {
//            output += 5;
//        }
//        else if (push_botton[i] >= 'J' && push_botton[i] <= 'L') {
//            output += 6;
//        }
//        else if (push_botton[i] >= 'M' && push_botton[i] <= 'O') {
//            output += 7;
//        }
//        else if (push_botton[i] >= 'P' && push_botton[i] <= 'S') {
//            output += 8;
//        }
//        else if (push_botton[i] >= 'T' && push_botton[i] <= 'V') {
//            output += 9;
//        }
//        else if (push_botton[i] >= 'W' && push_botton[i] <= 'Z') {
//            output += 10;
//        }
//    }
//
//    cout << output << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//int main()
//{
//    std::string input_sentence;
//    for (int i = 0; i < 100; i++)
//    {
//       std::getline(std::cin, input_sentence);
//       if (input_sentence.empty())
//       {
//           break;
//       }
//       std::cout << input_sentence << std::endl;
//    }
//    return 0;
//}

//#include<iostream> //ASCII형식 볼때 사용 가능
//#include<string>
//int main()
//{
//    char c = 'A';
//    std::cout << static_cast<int>(c);
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//int main()
//{
//    std::vector<int> input_num;
//    int max_value, min_value, max_index;
//    for (int i = 0; i < 9; i++)
//    {
//        int num;
//        std::cin >> num;
//        input_num.push_back(num);
//        max_value = *std::max_element(input_num.begin(), input_num.end());
//    }
//    for (int i = 0; i < input_num.size(); i++)
//    {
//        if (input_num[i] == max_value)
//        {
//            max_index = i;
//            break;
//        }
//    }
//
//    std::cout << max_value << "\n" << max_index + 1;
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    std::vector<int> chess = { 1, 1, 2, 2, 2, 8 };
//    std::vector<int> output_num;
//    std::vector<int> input_num;
//
//    for (int i = 0; i < 6; i++)
//    {
//        int a;
//        std::cin >> a;
//        input_num.push_back(a);
//        std::cout << chess[i] - input_num[i] << " ";
//    }
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main()
//{
//    std::string input_word;
//    std::cin >> input_word;
//
//    std::vector<int> alphabet;
//
//    
//    for (int i = 0; i < input_word.length(); i++)
//    {
//        char c = input_word[i];
//        if (c >= 'A' && c <= 'Z')
//        {
//            alphabet[c - 'A']++;
//        }
//        else if (c >= 'a' && c <= 'z')
//        {
//            alphabet[c - 'a']++;
//        }
//    }
//    int max_count = *std::max_element(alphabet.begin(), alphabet.end());
//    int max_index = std::find(alphabet.begin(), alphabet.end(), max_count) - alphabet.begin();
//    
//    if (std::count(alphabet.begin(), alphabet.end(), max_count) > 1)
//    {
//        std::cout << "?\n";
//    }
//    else
//    {
//        std::cout << (char)('A' + max_index) << "\n";
//    }
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//int main()
//{
//    int N, M = 0;
//
//    return 0;
//}

//#include <iostream>
// menofpassion의 매개변수는 A[]와 n임. int i는 n/2이고 리턴은 A[i]를 함
// n을 입력했을 때
//int MenOfPassion(int A[], int n)
//{
//    int i = n / 2;
//    return A[i];
//}
//
//int main()
//{
//    int i;
//    std::cin >> i;
//    std::cout << "0";
//
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//std::string solution(std::vector<std::string> participant, std::vector<std::string> completion)
//{
//    std::string answer = "";
//    // sort algorithm에 있는 STL, 정렬할 때 사용함
//    std::sort(participant.begin(), participant.end());
//    std::sort(completion.begin(), completion.end());
//
//    //방법 1
//    //for (int i = 0; i < completion.size(); i++)
//    //{
//    //    if (participant[i] != completion[i])
//    //    {
//    //        return participant[i];
//    //    }
//    //}
//    //return participant[participant.size() - 1];
//    // 방법 2
//    int i = 0;
//    for (i = 0; i < completion.size(); i++)
//    {
//        if (participant[i] != completion[i])
//        {
//            break;
//        }
//    }
//    return participant[i];
//}
//
//int main(void)
//{
//    std::vector<std::string> part = { "leo", "kiki", "eden" };
//    std::vector<std::string> comp = { "kiki", "eden" };
//    std::cout << solution(part, comp);
//    return 0;
//}
// Hash(해시)이용
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<unordered_map>//Hash Map을 사용하기 위한 라이브러리
//
//std::string solution(std::vector<std::string>participation, std::vector<std::string> completion)
//{
//    std::string answer = " ";
//    // Hash Map을 만들고, Hash Map에서 완주한 선수를 빼고, Hash Map에서 value가 0이 아닌 선수를 찾음
//
//    std::unordered_map<std::string, int>map;
//    for (auto player : participation)
//    {
//        if (map.end() == map.find(player))
//        {
//            map.insert(make_pair(player, 1));
//        }
//        else
//        {
//            map[player]++;
//        }
//    }
//
//    for (auto player : completion)
//    {
//        map[player]--;
//    }
//
//    for (auto player : participation)
//    {
//        if (map[player] > 0)
//        {
//            answer = player;
//            break;
//        }
//    }
//
//    return answer;
//}
//
//int main(void)
//{
//    std::vector<std::string> part = { "leo", "eden", "kiki" };
//    std::vector<std::string> comp = { "eden", "kiki" };
//    std::cout << solution(part, comp);
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int min_operation(int n)
//{
//    std::vector<int> dp(n + 1, 0);
//    for (int i = 2; i <= n; i++)
//    {
//        dp[i] = dp[i - 1] + 1;
//        if (i % 2 == 0)
//        {
//            dp[i] = std::min(dp[i], dp[i / 2] + 1);
//        }
//        if (i % 3 == 0)
//        {
//            dp[i] = std::min(dp[i], dp[i / 3] + 1);
//        }
//    }
//    return dp[n];
//}
//
//int main()
//{
//    int N;
//    std::cin >> N;
//
//    int result = min_operation(N);
//    std::cout << result;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//int main()
//{
//    int sum = 1, n;
//    std::cin >> n;
//    std::vector<int> factorial(n, 0);
//    for (int i = 0; i < n; i++)
//    {
//        factorial[i] = n - i;
//        sum *= factorial[i];
//        
//    }
//    std::cout << sum;
//    return 0;
//}

//#include <iostream>
//#include <vector>
//int factorial(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    return n * factorial(n - 1);
//}
//
//int main()
//{
//    int N;
//    std::cin >> N;
//    
//    std::cout << factorial(N);
//    return 0;
//}

//#include <iostream>
//int fibonacci(int n)
//{
//    if (n == 1 || n == 2)
//    {
//        return 1;
//    }
//    return fibonacci(n-1) + fibonacci(n-2);
//}
//
//int main()
//{
//    int a;
//    std::cin >> a;
//    std::cout << fibonacci(a);
//    return 0;
//}


// 재귀는 하나는 그대로고 하나는 그 전 숫자를 이용하는 방법을 택함.
//#include <iostream>
//
//int square(int under, int up)
//{
//    if (up == 1)
//    {
//        return under;
//    }
//    return under * square(under, up - 1);
//}
//
//int main()
//{
//    int UN, N;
//    std::cin >> UN >> N;
//
//    std::cout << square(UN, N);
//    return 0;
//}
//
//#include <iostream>
//// 1개일때는 1번, 2개일때는 3번, 3개일때는 7번, 4개일때는 15번
//void hanoitop(int n, int from, int to, int sub)
//{
//    if (n == 1)
//    {
//        std::cout << from << " " << to << "\n";
//        return;
//    }
//    hanoitop(n - 1, from, sub, to);
//    std::cout << from << " " << to << "\n\n";
//    hanoitop(n - 1, sub, to, from);
//}
//
//int main()
//{
//    int N; // 탑의 개수
//    std::cin >> N;
//    hanoitop(N, 1, 3, 2);
//    
//    return 0;
//}
//
//#include <iostream>
//void hanoitop(int n, int from, int to, int sub)
//{
//    int sum = 0;
//    if (n == 1)
//    {
//        std::cout << from << " " << to << "\n";
//        return;
//    }
//    else if (n > 20)
//    {
//        return;
//    }
//    hanoitop(n - 1, from, sub, to);
//    std::cout << from << " " << to << "\n";
//    hanoitop(n - 1, sub, to, from);
//}
//void square(int up)
//{
//    long double under = 1;
//    for (int i = 0; i < up; i++)
//    {
//        under *= 2;
//    }
//    std::cout << under - 1 << "\n";
//
//}
//
//int main()
//{
//    int N;
//    std::cin >> N;
//
//    square(N);
//    hanoitop(N, 1, 3, 2);
//    return 0;   
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//static int n; //static은 다른파일에서 접근하지 못하도록 제한하는역할과 정적초기화의 역할을 담당함
//              // 정적초기화는 int n = 0 과 같음(쓰레기 값이 들어가지 못하게 하는 역할)
//static int tree[26][2];
//
//
//// 현재 -> 왼쪽 -> 오른쪽
//void preOrder(int now) {
//    if (now == -1)return;
//    cout << (char)(now + 'A'); // 현재
//    preOrder(tree[now][0]); // 왼쪽
//    preOrder(tree[now][1]); // 오른쪽
//}
//
//// 왼쪽 -> 현재 -> 오른쪽
//void inOrder(int now) {
//    if (now == -1)return;
//    inOrder(tree[now][0]); // 왼쪽
//    cout << (char)(now + 'A'); // 현재
//    inOrder(tree[now][1]); // 오른쪽
//}
//
//// 왼쪽 -> 오른쪽 -< 현재
//void postOrder(int now) {
//    if (now == -1)return;
//    postOrder(tree[now][0]); // 왼쪽
//    postOrder(tree[now][1]); // 오른쪽
//    cout << (char)(now + 'A'); // 현재
//}
//
//int main()
//{   
//    std::ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        char node_char, left, right;
//        cin >> node_char >> left >> right;
//        int node = node_char - 'A';
//
//        if (left == '.') {
//            tree[node][0] = -1; // 보통 NULL값에 -1을 많이 사용해서 -1을 넣음
//        }
//        else {
//            tree[node][0] = left - 'A';
//        }
//        if (right == '.') {
//            tree[node][1] = -1;
//        }
//        else {
//            tree[node][1] = right - 'A';
//        }
//    }
//    preOrder(0);
//    cout << "\n";
//    inOrder(0);
//    cout << "\n";
//    postOrder(0);
//    cout << "\n";
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector < char >> star_point;
//
//void draw_star(int n, int x, int y)
//{
//    int width = 1 + 4 * (n - 1);
//    int height = 3 * (n - 1);
//
//    if (n == 1)
//    {
//        star_point[x][y] = '*';
//        return;
//    }
//
//    //가로 재귀
//    for (int i = 0; i < n; i++)
//    {
//        star_point[x + i][width] = '*';
//    }
//    //세로 재귀
//    for (int j = 0; j < n; j++)
//    {
//        star_point[height][y + j] = '*';
//    }
//    draw_star(n - 1, x + 2, y + 2);
//    
//}
//
//int main()
//{
//    int n;
//    std::cin >> n;
//    int length = 1 + 4 * (n - 1);
//    star_point = vector<vector<char>>(length, vector<char>(length, ' '));
//
//    draw_star(n, 0, 0);
//    for (int i = 0; i < length; i++)
//    {
//        cout << star_point[i][i];    
//        cout << '\n';
//    }
//
//    return 0;
//}

// 문제1
// 
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//    int go_hour, leave_hour, go_minute, leave_minute;
//    char colon;
//    int sum_hour = 0;
//    int sum_minute = 0;
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> go_hour >> colon >> go_minute >> leave_hour >> colon >> leave_minute;
//        sum_hour += leave_hour - go_hour;
//        sum_minute += leave_minute - go_minute;
//    }
//    int total_time = (sum_hour) * 60 + sum_minute;
//    std::cout << total_time;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//void compare(int A, int B)
//{
//    if (A > B)
//    {
//        cout << 'A';
//    }
//    else if (A < B)
//    {
//        cout << 'B';
//    }
//    else
//    {
//        cout << "same";
//    }
//}
//
//
//int main()
//{
//    int a, b;
//    char space;
//    cin >> a >> b;
//    compare(a, b);
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//void translate(string n)
//{
//    if (n == "1 2 3 4 5 6 7 8")
//    {
//        std::cout << "ascending";
//    }
//    else if (n == "8 7 6 5 4 3 2 1")
//    {
//        std::cout << "descending";
//    }
//    else
//    {
//        std::cout << "mixed";
//    }
//}
//
//int main()
//{
//    string n;
//    getline(cin, n);
//    translate(n);
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//void virus(int k, int p, int n)
//{
//    long long int virus_sum = k;
//    for (int i = 1; i <= n; i++)
//    {
//        virus_sum = (virus_sum * p) % 1000000007;
//    }
//    cout << virus_sum;
//}
//
//int main()
//{
//    int k, p, n;
//    std::cin >> k >> p >> n;
//    virus(k, p, n);
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//
//using namespace std;
//void reqursive(int n, int under, int total)
//{
//    if (n == 1)
//    {
//        std::cout << '9';
//        return;
//    }
//    under = pow(2, n);
//    total = pow(under + 1, 2);
//    std::cout << total;
//}
//
//int main()
//{
//
//    int n;
//    cin >> n;
//
//    reqursive(n, n, n);
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//const int MAX_N = 9;
//bool visited[MAX_N];
//vector<int> graph[MAX_N];
//
//void dfs(int n)
//{
//    visited[n] = true;
//    cout << n << ' ';
//    for (int i = 0; i < graph[n].size(); i++)
//    {
//        int y = graph[n][i];
//        if (!visited[y])
//        {
//            dfs(y);
//        }
//    }
//}
//
//int main(void)
//{
//    // 그래프 생성 (예시로 1->2, 1->3, 2->4, 2->5, 3->6, 6->7, 7->8, 8->9 으로 구성)
//    graph[1].push_back(2);
//    graph[1].push_back(3);
//    graph[2].push_back(4);
//    graph[2].push_back(5);
//    graph[3].push_back(6);
//    graph[6].push_back(7);
//    graph[7].push_back(8);
//    graph[8].push_back(9);
//
//    // visited 배열 초기화
//    for (int i = 1; i <= MAX_N; i++)
//    {
//        visited[i] = false;
//    }
//
//    int start_node = 1; // 시작 정점 설정 (1부터 시작)
//    dfs(start_node);
//    return 0;
//}
//
//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//int tree[1001][1001];
//
//bool dfs(int x, int y)
//{
//    if (x <= -1 || x >= n || y <= -1 || y >= m) // x = 0, y = 0 n = 1 m = 2
//    {
//        return false;
//    }
//
//    if (tree[x][y] == 0) // x = 0, y = 0 n = 1 m = 2
//    {
//        tree[x][y] = 1;// tree의 00은 0  01은 1,  n = 1 m = 2, dfs(0, 1)
//        dfs(x - 1, y); // tree 00은 1 false를 반환
//        dfs(x, y - 1); // tree 00은 false 반환
//        dfs(x + 1, y); // flase를 반환
//        dfs(x, y + 1); // tree[0][1]이 0이냐? --> 
//        return true;
//
//    }
//    return false;
//}
//
//int main()
//{
//    cin >> n >> m; // 1, 2
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf_s("%1d", &tree[i][j]);
//        }
//    }
//    int result = 0;
//    for (int i = 0; i < n; i++) // 0
//    {
//        for (int j = 0; j < m; j++) // 0
//        {
//            if (dfs(i, j))
//            {
//                result += 1;
//            }
//        }
//    }
//    cout << result << '\n';
//    return 0;
//}
//
//int dx[] = { -1, 0 ,1, 0 };
//int dy[] = { 0, -1, 0, 1 };



//bfs(int x, int y) {
//    if (tree[x][y] == 0) {
//        tree[x][y] = 1;
//        if(tree[x-1][y]==0)
//
//   }
//}

//bool dfs(int x, int y)
//{
//    for (int i = 0; i < 4; i++) {
//        x = dx[i];
//        y = dy[i];
//        if (x <= -1 || x >= n || y <= -1 || y >= m) // x = 0, y = 0 n = 1 m = 2
//        {
//            return false;
//        }
//
//        if (!visited[x][y]) // x = 0, y = 0 n = 1 m = 2
//        {
//            visited[x][y] = true;// tree의 00은 0  01은 1,  n = 1 m = 2, dfs(0, 1)
//            dfs(x, y);
//            return true;
//        }
//        return false;
//    }
//    
//}

// 별찍기 *
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//void starpoint(int n, int x, int y)
//{
//    if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
//    {
//        cout << ' ';
//    }
//    else
//    {
//        if (n / 3 == 0)
//        {
//            cout << '*';
//        }
//        else
//        {
//            starpoint(n / 3, x, y);
//        }
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            starpoint(n, i, j);
//        }
//        cout << '\n';
//    }
//    return 0;
//}

//// Z 
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int processcion(int n, int x, int y) 
//{
//    int result = 0;
//    int size = 1;
//
//    for (int i = 0; i < n; i++) 
//    {
//        int square_size = pow(size, 2);
//
//        int x_bit = (x / size) % 2;
//        int y_bit = (y / size) % 2;
//
//        int position = x_bit * 2 + y_bit;
//        result += position * square_size;
//
//        size *= 2;
//    }
//
//    return result;
//}
//
//int main() 
//{
//    int n, x, y;
//    cin >> n >> x >> y;
//
//    int result = processcion(n, x, y);
//    
//    cout << result << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int square_size[1024][1024];
//
//int compare(int a, int b, int c, int d)
//{
//    if (a >= b && a >= c && a >= d) 
//    {
//        if (b >= c && b >= d) return b;
//        if (c >= b && c >= d) return c;
//        return d;
//    }
//    if (b >= a && b >= c && b >= d) 
//    {
//        if (a >= c && a >= d) return a;
//        if (c >= a && c >= d) return c;
//        return d;
//    }
//    if (c >= a && c >= b && c >= d) 
//    {
//        if (a >= b && a >= d) return a;
//        if (b >= a && b >= d) return b;
//        return d;
//    }
//    if (d >= a && d >= b && d >= c) 
//    {
//        if (a >= b && a >= c) return a;
//        if (b >= a && b >= c) return b;
//        return c;
//    }
//}
//
//int square(int n, int x, int y)
//{
//    if (n == 1)
//    {
//        return square_size[x][y];
//    }
//    int new_size = n / 2;
//
//    int a = square(new_size, x, y);
//    int b = square(new_size, x, y + new_size);
//    int c = square(new_size, x + new_size, y);
//    int d = square(new_size, x + new_size, y + new_size);
//
//    return compare(a, b, c, d);
//
//}
//
// 
//int main()
//{
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> square_size[i][j];
//        }
//    }
//    int result = square(n, 0, 0);
//    cout << result;
//
//    return 0;
//}
//
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void short_leg(int n)
//{
//    vector<int>nan;
//    
//    for (int i = 0; i < n; i++)
//    {
//        nan.push_back(i);
//        nan[i] = n;
//    }
//}
//
//int main()
//{
//
//    int n;
//    cin >> n;
//    
//
//    return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//static int n[7];
//
//void combination(int start, bool visited[], int nanjang[], int a[], int count)
//{
//    if (count == 7)
//    {
//        int sum = 0;
//        int index = 0;
//        for (int i = 0; i < 9; i++)
//        {
//            if (visited[i])
//            {
//                sum += nanjang[i];
//                a[index] = nanjang[i];
//                index++;
//                //cout << sum << " ---------------" << '\n';;
//            }/*
//            cout << visited[i] << " * *************" << '\n';*/
//        }
//        if (sum == 100)
//        {
//            for (int j = 0; j < 7; j++)
//            {
//                n[j] = a[j];
//            }
//        }
//        return;
//    }
//    for (int k = start; k < 9; k++)
//    {
//        visited[k] = true;
//        combination(k + 1, visited, nanjang, a, count + 1);
//        visited[k] = false;
//    }
//}
//
//int main()
//{
//    bool visited[9];
//    int nanjang[9];
//    int a[9];
//    int count = 0;
//    for (int i = 0; i < 9; i++)
//    {
//        cin >> nanjang[i];
//    }
//    int start = 0;
//    combination(start, visited, nanjang, a, count);
//    int x = sizeof(n) / sizeof(n[0]);
//    sort(n, n + x);
//    for (int i = 0; i < 7; i++)
//    {
//        cout << n[i] << endl;
//    }
//
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//
//int compare(int n[], int sum)
//{
//    for (int i = 0; i < 9; i++)
//    {
//        sum += n[i];
//        if (sum > 100)
//        {
//            n[i] - n[i - 1];
//        }
//    }
//    for (int j = 0; j < 9; j++)
//    {
//
//    }
//}
//
//int main()
//{
//
//    int n[9];
//    for (int i = 0; i < 9; i++)
//    {
//        cin >> n[i];
//    }
//    compare(n, 0);
//
//
//    return 0;
//}


// 강의실 1개에 최대한 많읜 강의 배정 --> 시간 겹쳐도 상관x

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//    int total;
//    cin >> total;
//
//    vector<int>start_time(total);
//    vector<int>end_time(total);
//
//    for (int i = 0; i < total; i++)
//    {
//        cin >> start_time[i] >> end_time[i];
//    }
//    int count = 1;
//
//    int before_end_time = end_time[0];
//
//    for (int i = 1; i < total; i++)
//    {
//        int present_start_time = start_time[i];
//
//        if (present_start_time >= before_end_time)
//        {
//            count++;
//            before_end_time = end_time[i];
//        }
//    }
//    cout << count;
//    return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct Lecture {
//    int start;
//    int end;
//};
//
//bool compareEndTime(const Lecture& a, const Lecture& b) {
//    return a.end < b.end;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    vector<Lecture> classes(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> classes[i].start >> classes[i].end;
//    }
//
//    sort(classes.begin(), classes.end(), compareEndTime);
//
//    int count = 0;
//    int endTime = 0;
//
//    for (const Lecture& lecture : classes) {
//        if (lecture.start >= endTime) {
//            count++;
//            endTime = lecture.end;
//        }
//    }
//
//    cout << count << endl;
//
//    return 0;
//}

// grade average
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int avg(int a, int b, int output_avg[])
//{
//    int sum = 0;
//    for (int i = a - 1; i < b; i++)
//    {
//        sum = input_
//    }
//}
//
//int main()
//{
//    int i = 0;
//    int sum = 0;
//    int input_nofstd, input_nofsection, s_a, s_b;
//    double input_grade[1004];
//    double output_avg[1004];
//    cin >> input_nofstd >> input_nofsection;
//    cin >> input_grade[input_nofstd];
//
//    for (i = 0; i < input_nofsection; i++)
//    {
//        cin >> s_a >> s_b;
//        for (int j = s_a - 1; j < s_b; i++)
//        {
//
//        }
//    }
//
//
//    return 0;
//}

// Garage game(softeer)
// Role -> 가로세로 N칸의 차고가 있고, 각 차고에는 색
//#include <iostream>
//using namespace std;
//
//int square_size[1024][1024];
//
//int square(int n, int x, int y)
//{
//    if (n == 1)
//    {
//        return square_size[x][y];
//    }
//    int half = n / 2;
//    int sum = 0;
//    sum += square(half, x, y);
//    sum += square(half, x + half, y);
//    sum += square(half, x, y + half);
//    sum += square(half, x + half, y + half);
//
//    if (sum == 4 || sum == 0)
//    {
//        return sum;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < 3 * n; i++) // 2 들어오면 두번 반복
//    {
//        for (int j = 0; j < n; j++) // 2 들어오면 6번 반복
//        {
//            cin >> square_size[i][j];
//        }
//    }
//
//    int result = square(3 * n, 0, 0);
//    cout << result << '\n';
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int square_size[1024][1024];
//
//int square(int n, int x, int y, int color)
//{
//    if (x < 0 || x >= 3 * n || y < 0 || y >= n || square_size[x][y] != color)
//        return 0;
//
//    square_size[x][y] = 0;
//    int count = 1;
//
//    count += square(n, x - 1, y, color);
//    count += square(n, x + 1, y, color);
//    count += square(n, x, y - 1, color);
//    count += square(n, x, y + 1, color);
//
//    return count;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 0; i < 3 * n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> square_size[i][j];
//        }
//    }
//
//    int result = 0;
//    for (int round = 0; round < 3; round++)
//    {
//        for (int i = 0; i < 3 * n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (square_size[i][j] != 0)
//                {
//                    int color = square_size[i][j];
//                    int count = square(n, i, j, color);
//                    result += count * count;
//                }
//            }
//        }
//    }
//
//    cout << result << endl;
//
//    return 0;
//}

// 백준 1253 --> 시간복잡도, 좋은 수 찾기
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N;
//    cin >> N;
//    vector<int> A(N, 0);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> A[i];
//    }
//    sort(A.begin(), A.end());
//    
//    int result = 0;
//
//    for (int k = 0; k < N; k++) // k는 최종 출력될 수
//    {
//        long find = A[k];
//        int left = 0;
//        int right = N - 1;
//
//        while (left < right)
//        {
//            if (A[left] + A[right] == find)
//            {
//                if (left != k && right != k)
//                {
//                    result++;
//                    break;
//                }
//                else if (left == k)
//                {
//                    left++;
//                }
//                else if (right == k)
//                {
//                    right--;
//                }
//            }
//            else if (A[left] + A[right] < find)
//            {
//                left++;
//            }
//            else
//            {
//                right--;
//            }
//        }   
//    }
//    cout << result;
//    return 0;
//}


// softeer 플레이페어 암호
//#include <iostream>
//using namespace std;
//
//bool delete_alphabet(char check, string dup_check)
//{
//    for (int i = 0; i < dup_check.length(); i++)
//    {
//        if (dup_check[i] == check)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//string remove_dup(string input_password)
//{
//    string save_wrod = "";
//
//    for (int i = 0; i < input_password.length(); i++)
//    {
//        if (!delete_alphabet(input_password[i], save_wrod))
//        {
//            save_wrod += input_password[i];
//        }
//    }
//    return save_wrod;
//}
//
//string add_alphabet(string input_password) //암호키 만들기
//{
//    string alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
//    string result = remove_dup(input_password);
//
//    for (int i = 0; i < 25; i++)
//    {
//        char check = alphabet[i];
//        bool present = false;
//
//        for (int j = 0; j < result.length(); j++)
//        {
//            if (result[j] == check)
//            {
//                present = true;
//                break;
//            }
//        }
//        if (!present)
//        {
//            result += check;
//        }
//    }
//    return result;
//}
//
//
//void make_password_array(string input_word, string input_password, char pass_word_key[][5])
//{
//    string result = add_alphabet(input_password);
//    for (int i = 0; i < input_word.length(); i++)
//    {
//        if(pass_word)
//    }
//    int index = 0;
//
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j < 5; j++)
//        {
//            pass_word_key[i][j] = result[index];
//            index++;
//        }
//    }
//}
//string make_password(string input_word, string input_password)
//{
//    char pass_word_key[5][5];
//    make_password_array(input_word, input_password, pass_word_key);
//
//    string result_output = "";
//
//    for (int i = 0; i < input_word.length(); i += 2) // 두글자씩 처리위해
//    {
//        char char1 = input_word[i];
//        char char2 = input_word[i + 1];
//
//        int row1 = -1, col1 = -1, row2 = -1, col2 = -1;
//        for (int r = 0; r < 5; r++)
//        {
//            for (int c = 0; c < 5; c++)
//            {
//                if (pass_word_key[r][c] == char1)
//                {
//                    row1 = r;
//                    col1 = c;
//                }
//                if (pass_word_key[r][c] == char2)
//                {
//                    row2 = r;
//                    col2 = c;
//                }
//            }
//        }
//        if (row1 == row2)
//        {
//            result_output += pass_word_key[row1][(col1 + 1) % 5];
//            result_output += pass_word_key[row2][(col2 + 1) % 5];
//        }
//        else if (col1 == col2)
//        {
//            result_output += pass_word_key[(row1 + 1) % 5][col1];
//            result_output += pass_word_key[(row2 + 1) % 5][col2];
//        }
//        else
//        {
//            result_output += pass_word_key[row1][col2];
//            result_output += pass_word_key[row2][col1];
//        }
//    }
//
//    return result_output;
//}
//
//
//int main()
//{
//    string input_word;
//    string input_password;
//    char pass_word_key[5][5];
//
//    cin >> input_word >> input_password;
//
//    //string result = make_password(input_word, input_password);
//    string result = add_alphabet(input_password);
//
//    cout << result << endl;
//}


//#include <iostream>
//using namespace std;
//
//void callByValue(int num) {
//    num = num + 5;
//    cout << num;  // 10
//}
//
//void callByRefer(int num2[]) {
//    num2[0] = num2[0] + 5;
//    cout << num2[0];
//}
//int main()
//{
//    int num = 5;
//    callByValue(num); // 10
//    cout << num << "\n"; // 5
//
//    int num2[] = { 5 };
//    callByRefer(num2); // 10
//    cout << num2[0]; // 5
//
//    return 0;
//}


