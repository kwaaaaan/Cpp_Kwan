//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int a, int b)
//{
//	return a < b; // 오름차순 정렬
//	//return a > b; // 내림차순 정렬
//}
//
//int main()
//{
//	int a[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
//	sort(a, a + 10, compare);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	return 0;
//}

// 피보나치 수열
//#include <iostream>
//
//using namespace std;
//
//int dp(int x)
//{
//	if (x == 1) return 1;
//	if (x == 2) return 1;
//
//	return dp(x - 1) + dp(x - 2);
//}
//
//int main()
//{
//	cout << dp(50); // 50이 되면 runtime오류, overflow발생함
//	return 0;
//}

// 피보나치 수열 해결 Dynamic Programin(다이나믹 프로그래밍, DP)
//#include <iostream>
//
//using namespace std;
//
//long long arr[100];
//
//long long dp(long long x)
//{
//	if (x == 1) return 1;
//	if (x == 2) return 1;
//	if (arr[x] != 0) return arr[x];
//	return arr[x] = dp(x - 1) + dp(x - 2);
//}
//
//int main()
//{
//	cout << dp(50);
//	return 0;
//}

// DP 백준 11726, 2xn 타일링 --> 피보나치 수열과 같음
// D[n] = D[n-1] + D[n-2]
//#include <iostream>
//
//using namespace std;
//int d[1001];
//
//int dp(int x)
//{
//	if (x == 1) return 1;
//	if (x == 2) return 2;
//	if (d[x] != 0) return d[x]; // 그전에 구한값이 있다면 그대로 반환
//	return d[x] = (dp(x - 1) + dp(x - 2)) % 10007;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << dp(n);
//	return 0;
//}

// DP 백준 11727, 2xn 타일링 2
// D[n] = D[n-1] + D[n-2]*2

//#include <iostream>
//
//using namespace std;
//int d[10001];
//
//int dp(int x)
//{
//	if (x == 1) return 1;
//	if (x == 2) return 3;
//	if (d[x] != 0) return d[x];
//	return d[x] = (dp(x - 1) + 2 * dp(x - 2)) % 10007;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << dp(n);
//	return 0;
//}

// DP 백준 2133, 타일 채우기
//#include <iostream>
//using namespace std;
//int d[1001];
//int dp(int x)
//{
//	if (x == 0) return 1;
//	if (x == 1) return 0;
//	if (x == 2) return 3;
//	if (d[x] != 0) return d[x];
//	int result = 3 * dp(x - 2);
//	for (int i = 3; i <= x; i++)
//	{
//		if (x % 2 == 0)
//		{
//			result += 2 * dp(x - i);
//		}
//	}
//	return d[x] = result;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << dp(n);
//	return 0;
//}



// 점수가 작은 순서대로 정렬하는 프로그램
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//class Student {
//public:
//	string name;
//	int score;
//	Student(string name, int score)
//	{
//		this->name = name;
//		this->score = score;
//	}
//	bool operator < (Student& student)
//	{
//		return this->score < student.score;
//	}
//};
//
//int main()
//{
//	Student students[]
//	{
//		Student("김정관", 90),
//		Student("김성현", 17),
//		Student("이규정", 34),
//		Student("최대진", 13),
//		Student("전동권", 97),
//		Student("임희중", 99),
//	};
//	sort(students, students + 6);
//	
//	for (int i = 0; i < 6; i++)
//	{
//		cout << students[i].name << " " << students[i].score << endl;
//	}
//	
//	return 0;
//}

// class를 사용하지 않고 정렬
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<pair<int, string>> v; //한쌍의 데이터를 다루기 위해서 pair를 씀, 한쌍의 데이터를 int와 string으로 묶어줌
//	v.push_back(pair<int, string>(90, "김정관"));
//	v.push_back(pair<int, string>(70, "김성현"));
//	v.push_back(pair<int, string>(86, "이규정"));
//	v.push_back(pair<int, string>(99, "전동권"));
//	v.push_back(pair<int, string>(17, "임희중"));
//
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].second << ' ' << v[i].first << endl; //second는 두번째 요소인 string을 의미함 --> 이름값(first는 int형, 90점)
//	}
//	return 0;
//}

// 3개의 비교이자가 있고, 두개를 비교하여 정렬하는 프로그래밍
// 점수가 같을때 나이가 어릴수록 먼저 배열

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
//{
//	if (a.second.first == b.second.first)
//	{
//		return a.second.second > b.second.second;
//	}
//	else
//		return a.second.first > b.second.first;
//}
//
//int main()
//{
//	vector<pair<string, pair<int, int>>> v; //한쌍의 데이터를 다루기 위해서 pair를 씀, 한쌍의 데이터를 int와 string으로 묶어줌
//	v.push_back(pair<string, pair<int, int>>("김정관", pair<int, int>(90, 940626)));
//	v.push_back(pair<string, pair<int, int>>("최대진", pair<int, int>(93, 930727)));
//	v.push_back(pair<string, pair<int, int>>("이규정", pair<int, int>(89, 920222)));
//	v.push_back(pair<string, pair<int, int>>("임희중", pair<int, int>(90, 940828)));
//	v.push_back(pair<string, pair<int, int>>("김성현", pair<int, int>(90, 940103)));
//
//	sort(v.begin(), v.end(), compare);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].first << v[i].second.first << ' ' << v[i].second.second << endl; //second는 두번째 요소인 string을 의미함 --> 이름값(first는 int형, 90점)
//	}
//	return 0;
//}

// 힙(heap)정렬
//#include<iostream>
//int number = 9;
//int heap[9] = { 7, 5, 2, 8, 6, 3, 1, 9, 4 };
//
//int main()
//{
//	for (int i = 1; i < number; i++)
//	{
//		int c = i;
//		do {
//			int root = (c - 1) / 2;
//			if (heap[root] < heap[c])
//			{
//				int temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			c = root;
//		}
//		while (c != 0);
//	}
//	for (int i = number - 1; i >= 0; i--)
//	{
//		int temp = heap[0];
//		heap[0] = heap[i];
//		heap[i] = temp;
//		int root = 0;
//		int c = 1;
//		do {
//			c = 2 * root + 1;
//			if (heap[c] < heap[c + 1] && c < i - 1)
//			{
//				c++;
//			}
//			if (heap[root] < heap[c] && c < i)
//			{
//				int temp = heap[root];
//				heap[root] = heap[c];
//				heap[c] = temp;
//			}
//			root = c;
//		} while (c < i);
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		std::cout << heap[i];
//	}
//
//	return 0;
//}

// 백준 단어정렬 1181
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int n;
//vector<string> a(n);
//
//
//bool compare(string a, string b)
//{
//	if (a.length() < b.length())
//	{
//		return true;
//	}
//	else if (a.length() > b.length())
//	{
//		return false;
//	}
//	else
//	{
//		return a < b; // string의 경우는 사전순으로 정렬하게 됨
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a.begin(), a.end(), compare);
//
//	for (int i = 0; i < n; i++)
//	{
//		if (i > 0 && a[i] == a[i - 1])
//		{
//			continue;
//		}
//		else
//		{
//			cout << a[i] << '\n';
//		}
//	}
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	stack<int> s;
//	s.push(7);
//	s.push(5);
//	s.push(4);
//	s.pop();
//	s.push(6);
//	s.pop();
//	while (!s.empty())
//	{
//		cout << s.top() << ' ';
//		s.pop();
//	}
//
//	return 0;
//}

// QUEUE

//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	queue<int> q;
//	q.push(7);
//	q.push(5);
//	q.push(4);
//	q.pop();
//	q.push(6);
//	q.pop();
//
//	while (!q.empty())
//	{
//		cout << q.front() << ' '; //남아있는건 4와 6
//		q.pop();
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int number = 7; //원소의 개수
//int c[7]; //방문 처리 check
//vector<int> a[8]; // 7+1인 8의 크기로 벡터를 만듬 -> 각 노드의 인덱스가 1부터 채워질 수 있도록 만들어준것(인덱스는 0부터 니까)
//
//void bfs(int start)
//{
//	queue<int> q;
//	q.push(start);
//	c[start] = true;
//
//	while (!q.empty())
//	{
//		int x = q.front();
//		q.pop();
//		printf("%d ", x);
//		
//		for (int i = 0; i < a[x].size(); i++)
//		{
//			int y = a[x][i];
//
//			if (!c[y])
//			{
//				q.push(y);
//				c[y] = true; //방문처리
//			}
//		}
//	}
//}
//
//int main()
//{
//	a[1].push_back(2);
//	a[2].push_back(1);
//	
//	a[1].push_back(3);
//	a[3].push_back(1);
//	
//	a[2].push_back(3);
//	a[3].push_back(2);
//
//	a[2].push_back(4);
//	a[4].push_back(2);
//
//	a[2].push_back(5); 
//	a[5].push_back(2);
//
//	a[3].push_back(6);
//	a[6].push_back(3);
//
//	a[3].push_back(7);
//	a[7].push_back(3);
//
//	a[4].push_back(5);
//	a[5].push_back(4);
//
//	a[6].push_back(7);
//	a[7].push_back(6);
//
//	bfs(1);
//
//	return 0;
//}


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int number = 7;
//int c[7];
//vector<int> a[8];
//
//void dfs(int x)
//{
//	if (c[x]) return;
//	c[x] = true;
//	cout << x << " ";
//	for (int i = 0; i < a[x].size(); i++)
//	{
//		int y = a[x][i];
//		dfs(y);
//	}
//}
//
//int main()
//{
//	a[1].push_back(2);
//	a[2].push_back(1);
//	
//	a[1].push_back(3);
//	a[3].push_back(1);
//	
//	a[2].push_back(3);
//	a[3].push_back(2);
//
//	a[2].push_back(4);
//	a[4].push_back(2);
//
//	a[2].push_back(5); 
//	a[5].push_back(2);
//
//	a[3].push_back(6);
//	a[6].push_back(3);
//
//	a[3].push_back(7);
//	a[7].push_back(3);
//
//	a[4].push_back(5);
//	a[5].push_back(4);
//
//	a[6].push_back(7);
//	a[7].push_back(6);
//
//	dfs(1);
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int number = 15;

// 하나의 노드 정보를 선언합니다.
//typedef struct node *treePointer;
//typedef struct node
//{
//	int data;
//	treePointer leftChild, rightChild;
//} node;
//
//void preorder(treePointer ptr)
//{
//	if (ptr) // null값이 아니라면
//	{
//		cout << ptr->data << ' ';
//		preorder(ptr->leftChild);
//		preorder(ptr->rightChild);
//	}
//}
//void inorder(treePointer ptr)
//{
//	if (ptr) // null값이 아니라면
//	{
//		inorder(ptr->leftChild);
//		cout << ptr->data << ' ';
//		inorder(ptr->rightChild);
//	}
//}
//void postorder(treePointer ptr)
//{
//	if (ptr) // null값이 아니라면
//	{
//		postorder(ptr->leftChild);
//		postorder(ptr->rightChild);
//		cout << ptr->data << ' ';
//	}
//}
//
//int main()
//{
//	node nodes[number + 1];
//	for (int i = 1; i <= number; i++)
//	{
//		nodes[i].data = i;
//		nodes[i].leftChild = NULL;
//		nodes[i].rightChild = NULL;
//	}
//	for (int i = 1; i <= number; i++)
//	{
//		if (i % 2 == 0)
//		{
//			nodes[i / 2].leftChild = &nodes[i];
//		}
//		else
//		{
//			nodes[i / 2].rightChild = &nodes[i];
//		}
//	}
//
//	preorder(&nodes[1]);
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Cat
//{
//public:
//	Cat(std::string name, int age):mName{move(name)}, mAge{age} {}
//	void speak()
//	{
//		cout << "meow" << mName << mAge << endl;
//	}
//private:
//	string mName;
//	int mAge;
//};
//
//int main()
//{
	//vector<int> nums(10000, 1); //10000개의 어레이 안에 1이 들어가있는 상태
	//nums.push_back(2); // emplace_back 또한 있음
	//nums.pop_back();

	//nums.emplace(nums.begin(), 3); //맨 첫번째에 3을 넣어줌
	//nums.erase(nums.begin()); // 맨 첫번째의 원소를 지워줌


//	vector<Cat> cats;
//	cats.emplace_back(Cat{ "cat0", 0 });
//	cats.emplace_back(Cat{ "cat1", 1 });
//
//	cats.emplace_back(Cat{ "kitty", 2 });
//
//	for (auto& cat : cats)
//	{
//		cat.speak();
//	}
//	return 0;
//}

//// 홀수만 더하기
//#include <iostream> 
//using namespace std;
//int sum[10000];
//
//int main()
//{
//	int n, num;
//	cin >> n;
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cin >> num;
//			if (num % 2 == 1)
//			{
//				sum[i] += num;
//			}
//		}
//	}
//
//	for (int i = 1; i < n + 1; i++)
//	{
//		cout << "#" << i << ' ' << sum[i] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 1; i < n; i++)
//	{
//		int day;
//		cin >> day;
//		vector<int> prices(day);
//
//		for (int j = 0; j < day; j++)
//		{
//			cin >> prices[j];
//		}
//
//		long long profit = 0;
//		int max_price = prices[day - 1];
//
//		for (int j = day - 2; j >= 0; j--)
//		{
//			if (prices[j] < max_price)
//			{
//				profit += max_price - prices[j];
//			}
//			else
//			{
//				max_price = prices[j];
//			}
//		}
//		cout << "#" << i << " " << profit << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <cstring>  // memset을 사용하기 위한 헤더 파일
//using namespace std;
//
//int N, K, answer;  // N: 지도의 크기, K: 땅 파기 가능한 깊이, answer: 최종 정답
//int maps[10][10];  // 지도 정보를 저장하는 배열
//bool visited[10][10];  // 방문 여부를 저장하는 배열
//int dy[] = { -1, 1, 0, 0 };  // 상하좌우 이동을 위한 배열
//int dx[] = { 0, 0, -1, 1 };
//
//// DFS 함수 정의
//void dfs(int r, int c, int cnt, bool isUsed) {
//    answer = max(answer, cnt);  // 현재까지의 등산로 길이 중 최대값 업데이트
//    visited[r][c] = true;  // 현재 위치를 방문했다고 표시
//
//    for (int d = 0; d < 4; d++) {  // 상하좌우 4방향에 대해서
//        int nr = r + dy[d];
//        int nc = c + dx[d];
//
//        if (nr < 0 || nc < 0 || nr >= N || nc >= N)  // 지도 범위를 벗어나면 무시
//            continue;
//
//        if (visited[nr][nc])  // 이미 방문한 곳이면 무시
//            continue;
//
//        if (maps[nr][nc] < maps[r][c])  // 현재 위치보다 낮은 곳이면 이동
//            dfs(nr, nc, cnt + 1, isUsed);
//        else {
//            if (!isUsed && maps[nr][nc] - K < maps[r][c]) {  // 아직 땅 파기 기회가 있고, 땅을 파서 갈 수 있다면
//                int tmp = maps[nr][nc];  // 현재 위치의 높이를 임시로 저장
//                maps[nr][nc] = maps[r][c] - 1;  // 땅을 파고 이동
//                dfs(nr, nc, cnt + 1, true);  // DFS 재귀 호출
//                maps[nr][nc] = tmp;  // 땅 파기 작업을 원래대로 되돌림
//            }
//        }
//    }
//
//    visited[r][c] = false;  // 방문 여부를 다시 초기화하여 다른 경로로의 탐색을 허용
//}
//
//int main() {
//    int T;
//    cin >> T;  // 테스트 케이스의 개수 입력
//
//    for (int tc = 1; tc <= T; tc++) {
//        cin >> N >> K;  // 지도 크기와 땅 파기 가능한 깊이 입력
//        answer = 0;
//        memset(visited, false, sizeof(visited));  // visited 배열 초기화
//        vector<pair<int, int>> highPeaks;  // 최고 봉우리의 좌표를 저장하는 벡터
//        int maxHeight = 0;  // 최고 높이 초기화
//
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                cin >> maps[i][j];  // 지도 정보 입력
//
//                // 최고 봉우리의 높이를 찾음
//                if (maps[i][j] < maxHeight)
//                    continue;
//                else if (maps[i][j] > maxHeight) {
//                    maxHeight = maps[i][j];
//                    highPeaks.clear();  // 최고 봉우리가 갱신되면 벡터를 비움
//                }
//
//                highPeaks.push_back(make_pair(i, j));  // 최고 봉우리의 좌표 저장
//            }
//        }
//
//        // 모든 최고 봉우리에 대해 등산로 조성 시뮬레이션을 시작
//        for (const auto& peak : highPeaks)
//            dfs(peak.first, peak.second, 1, false);
//
//        cout << "#" << tc << " " << answer << endl;  // 결과 출력
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define MAX_N 10
//int n, e;
//int graph[MAX_N][MAX_N];
//bool visited[MAX_N];
//
//void dfs(int node)
//{
//	visited[node] = true;
//	cout << node << ' ';
//
//	for (int next = 0; next < n; ++next)
//	{
//		if (!visited[next] && graph[node][next]) dfs(next);
//	}
//}
//
//int main()
//{
//	cin >> n >> e;
//	memset(visited, 0, sizeof(visited));
//	memset(graph, 0, sizeof(graph));
//
//	for (int i = 0; i < e; ++i)
//	{
//		int u, v;
//		cin >> u >> v;
//		graph[u][v] = graph[v][u] = 1;
//	}
//	dfs(0);
//
//	return 0;
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int>map[101]; // 그래프를 나타내는 인접리스트, a[i]에는 노드 i와 연결된 노드들의 리스트 저장
//bool check[101]; // 노드의 방문여부
//int cnt = 0; // 노드 수 저장
//
//void dfs(int x)
//{
//	check[x] = true;
//	for (int i = 0; i < map[x].size(); i++)
//	{
//		int y = map[x][i];
//		if (!check[y]) dfs(y);
//		cnt++;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	
//	memset(check, 0, sizeof(check));
//
//	for (int i = 0; i < m; i++)
//	{
//		int u, v;
//		cin >> u >> v;
//		map[u].push_back(v);
//		map[v].push_back(u);
//	}
//	dfs(1);
//	for (int i = 1; i <= n; i++)
//	{
//		if (check[i]) cnt++;
//	}
//	cout << cnt - 1 << '\n';
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//bool check[];
//using namespace std;
//int square_size[625][625];
//
//void dfs(int n)
//{
//
//}
//
//int square(int n, int x, int y)
//{
//	if()
//}

//int main()
//{
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> square_size[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << square_size[i][i];
//		}
//	}
//
//
//	return 0;
//}

// 나무 재태크
//MAP[MAX][MAX] 에는 각 칸에 존재하는 나무들의 나이들이 저장되 있구나 !
//
//Energy[MAX][MAX] 에는 각 칸에 존재하는 양분의 값이 저장되 있구나 !
//
//Insert_Energy[MAX][MAX] 에는 각 칸에 매년마다 추가되는 양분의 값이 저장되어 있구나 !

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N, M, K;
//int energy[1024][1024];
//int insert_energy[1024][1024];
//
//vector<int> MAP[1024][1024];
//
//int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//
//void input()
//{
//	cin >> N >> M >> K;
//	for (int i = 0; i <= N; i++)
//	{
//		for (int j = 0; j <= N; j++)
//		{
//			cin >> insert_energy[i][j];
//			energy[i][j] = 5; // 양분 input
//		}
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		MAP[a][b].push_back(c);
//	}
//}
//
//void sprint_summer()
//{
//
//}
//
//int main()
//{
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MAX_N = 10;
//const int dr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
//const int dc[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
//
//int N, M, K; // N: 배열 크기, M: 초기 나무의 수, K: 시뮬레이션 반복횟수
//int A[MAX_N][MAX_N]; // A: 양분
//int land[MAX_N][MAX_N]; //land: 땅에있는 양분
//vector<int> trees[MAX_N][MAX_N]; // 각 칸에있는 나무들의 나이
//
//void spring_and_summer()
//{
//    for (int r = 0; r < N; ++r)
//    {
//        for (int c = 0; c < N; ++c)
//        {
//            if (!trees[r][c].empty())
//            {
//                vector<int> new_trees;
//                int dead_tree_sum = 0;
//
//                for (int i = 0; i < trees[r][c].size(); ++i)
//                {
//                    int age = trees[r][c][i];
//                    if (land[r][c] >= age)
//                    {
//                        land[r][c] -= age;
//                        new_trees.push_back(age + 1);
//                    }
//                    else
//                    {
//                        dead_tree_sum += age / 2;
//                    }
//                }
//
//                trees[r][c] = new_trees;
//                land[r][c] += dead_tree_sum;
//            }
//        }
//    }
//}
//
//void fall()
//{
//    for (int r = 0; r < N; ++r)
//    {
//        for (int c = 0; c < N; ++c)
//        {
//            for (int i = 0; i < trees[r][c].size(); ++i)
//            {
//                int age = trees[r][c][i];
//                if (age % 5 == 0)
//                {
//                    for (int dir = 0; dir < 8; ++dir)
//                    {
//                        int nr = r + dr[dir];
//                        int nc = c + dc[dir];
//                        if (nr >= 0 && nr < N && nc >= 0 && nc < N)
//                        {
//                            trees[nr][nc].push_back(1);
//                        }
//                    }
//                }
//            }
//        }
//    }
//}
//
//void winter()
//{
//    for (int r = 0; r < N; ++r)
//    {
//        for (int c = 0; c < N; ++c)
//        {
//            land[r][c] += A[r][c];
//        }
//
//    }
//}
//
//int count_alive_trees()
//{
//    int count = 0;
//    for (int r = 0; r < N; ++r)
//    {
//        for (int c = 0; c < N; ++c)
//        {
//            count += trees[r][c].size();
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    cin >> N >> M >> K;
//
//    for (int r = 0; r < N; ++r)
//    {
//        for (int c = 0; c < N; ++c)
//        {
//            cin >> A[r][c];
//            land[r][c] = 5;
//        }
//    }
//
//    for (int i = 0; i < M; ++i)
//    {
//        int x, y, z;
//        cin >> x >> y >> z;
//        trees[x - 1][y - 1].push_back(z);
//    }
//
//    for (int year = 0; year < K; ++year)
//    {
//        spring_and_summer();
//        fall();
//        winter();
//    }
//
//    int answer = count_alive_trees();
//    cout << answer << endl;
//
//    return 0;
//}
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//static string input[] = { "1", "2", "3", "4" };
//static int N = sizeof(input) / sizeof(input[0]);
//static const int R = 2;
//static string temp[R];
//static bool isSelect[4];
//
//
//void permutation(int depth) {
//    if (depth == R) {
//        for (int i = 0; i < R; i++) {
//            cout << temp[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//
//    for (int i = 0; i < N; i++) {
//        if (isSelect[i]) {
//            continue;
//        }
//
//        temp[depth] = input[i];
//        isSelect[i] = true;
//        permutation(depth + 1);
//        isSelect[i] = false;
//    }
//}
//
//int main() {
//    int depth = 0;
//
//    for (int i = 0; i < N; i++) {
//        isSelect[i] = false;
//    }
//
//    permutation(depth);
//
//    return 0;
//}
//


//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<string> input = { "1", "2", "3", "4" };
//int N = input.size();
//int R = 3;
//
//vector<string> temp(R);
//
//void combination(int depth, int start) {
//    if (depth == R) {
//        for (int i = 0; i < R; i++) {
//            cout << temp[i] << " ";
//        }
//        cout << endl;
//        return;
//    }
//
//    for (int i = start; i < N; i++) {
//        temp[depth] = input[i];
//        combination(depth + 1, i+1);
//    }
//}
//
//int main() {
//    int depth = 0;
//    int start = 0;
//
//    combination(depth, start);
//
//    return 0;
//}


// 백준 1202 보석도둑
//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int N; // 보석의 개수
//int K; // 가방의 개수
//
//vector<pair<int, int>> jewelry; // 보석의 무게와 가격
//vector<int> bag; // 가방의 수용가능한 최대무게
//priority_queue<int, vector<int>, less<int>> pq; // 가방에 담을 수 있는 보석의 가치를 내림차순 정렬
//
//long long solve()
//{
//	sort(jewelry.begin(), jewelry.end());
//	sort(bag.begin(), bag.end());
//
//	int index = 0;
//	long long sum = 0;
//
//	for (int i = 0; i < K; i++)
//	{
//		while (index < N && bag[i] >= jewelry[index].first)
//		{
//			pq.push(jewelry[index].second); // queue에는 push, vector에는 push_back
//			index++;
//		}
//		if (!pq.empty())
//		{
//			sum += pq.top();
//			pq.pop();
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	cin >> N >> K;
//	jewelry.resize(N);
//	bag.resize(K);
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> jewelry[i].first >> jewelry[i].second;
//	}
//
//	for (int i = 0; i < K; ++i)
//	{
//		cin >> bag[i];
//	}
//	cout << solve();
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	string input;
//	cin >> input;
//
//	for (int i = 0; i < input.length(); i += 10)
//	{
//		cout << input.substr(i, 10) << endl;
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//	string today[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
//	int sum = 0;
//	int x, y;
//
//	cin >> x >> y;
//
//	for (int i = 0; i < x - 1; i++)
//	{
//		sum += month[i];
//	}
//	sum += y;
//	cout << today[sum % 7];
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> numbers;
//
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		numbers.push_back(num);
//	}
//
//	sort(numbers.begin(), numbers.end());
//	int small = numbers[0];
//	int large = numbers[n - 1];
//
//	cout << small << " " << large;
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void make_star(int n, int k = 0)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		cout << " ";
//	}
//	for (int i = 0; i <= k; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//	make_star(n - 1, k + 1);
//
//}
//
//int main()
//{
//	char star = '*';
//	char space = ' ';
//	int n;
//
//	cin >> n;
//	make_star(n);
//
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void make_star(int n, int k = 0)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//	make_star(n - 1, k + 1);
//
//}
//
//int main()
//{
//	char star = '*';
//	char space = ' ';
//	int n;
//
//	cin >> n;
//	make_star(n);
//
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> memo;
//
//int make_one(int n)
//{
//	
//	if (n == 1) return 0;
//	if (memo[n] != -1) return memo[n];
//
//	int result = 1 + make_one(n - 1);
//
//	if (n % 3 == 0)
//	{
//		int temp = 1 + make_one(n / 3);
//		if (temp < result) result = temp;
//	}
//	if (n % 2 == 0)
//	{
//		int temp = 1 + make_one(n / 2);
//		if (temp < result) result = temp;
//	}
//
//	if (n % 3 != 0 && n % 2 != 0)
//	{
//		int temp = 1 + make_one(n - 1);
//		if (temp < result) result = temp;
//	}
//	memo[n] = result;
//	return result;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	memo.assign(n + 1, -1);
//	int result = make_one(n);
//	cout << result;
//
//	return 0;
//}

// 백준 1260, DFS와 BFS, queue 사용
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//vector<int> e[1001];
//bool check[1001];
//static int N, M, V; // N: 정점의 개수, M: 간선의 개수, V: 탐색 시작번호
//
//void dfs(int v)
//{
//	check[v] = true;
//	cout << v << " ";
//	for (int i = 0; i < e[v].size(); i++)
//	{
//		int next = e[v][i];
//		if (!check[next])
//		{
//			dfs(next);
//		}
//	}
//}
//
//void bfs(int v) // bfs는 queue(priority_queue 사용, 이는 배열임)
//{
//	//priority_queue<int> pq;
//
//	queue<int> q;
//	q.push(v);
//	check[v] = true;
//
//	while (!q.empty())
//	{
//		int cur = q.front(); // q의 첫번째 요소를 cur에 대입
//		q.pop(); // q에 맨 위에요소 지워줌
//		cout << cur << " ";
//		for (int i = 0; i < e[cur].size(); i++)
//		{
//			int next = e[cur][i];
//			if (!check[next])
//			{
//				check[next] = true;
//				q.push(next);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int from, to;
//	cin >> N >> M >> V;
//
//	for (int i = 0; i < M; i++)
//	{
//		cin >> from >> to;
//		e[from].push_back(to);
//		e[to].push_back(from);
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		sort(e[i].begin(), e[i].end());
//	}
//	dfs(V);
//	cout << '\n';
//	memset(check, false, sizeof(check));//memset --> check 배열을 false로 초기화하, check의 1001개 요소를		
//	bfs(V);
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int dx[4] = { 1, -1, 0, 0 }; // 상, 하
//int dy[4] = { 0, 0, 1, -1 }; // 좌, 우
//int n;
//
//vector<vector<int>> save_info; // 미로 구조 및 가중치 정보 저장
//vector<vector<int>> dist; // 출발지점부터 각 위치까지 최단거리 저장
//
//void bfs()
//{
//	queue<pair<int, int>> pq;
//	pq.push(make_pair(0, 0)); // 시작지점 추가
//	dist[0][0] = save_info[0][0];
//
//	while (!pq.empty())
//	{
//		int y = pq.front().first;
//		int x = pq.front().second;
//		pq.pop();
//
//		for (int i = 0; i < 4; i++) // 상하좌우 이동
//		{
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//		
//			if (ny >= 0 && ny < n && nx >= 0 && nx < n)
//			{
//				if (dist[ny][nx] > dist[y][x] + save_info[ny][nx])
//				{
//					dist[ny][nx] = dist[y][x] + save_info[ny][nx];
//					pq.push(make_pair(ny, nx));
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int count = 1;
//
//	while (true)
//	{
//		cin >> n;
//		if (n == 0) break;
//
//		save_info.assign(n, vector<int>(n, 0)); //save_info의 크기를 n 그리고 n개의 원소를 가지고 모든값은 0으로 초기화됨
//		dist.assign(n, vector<int>(n, 2000000000)); // 충분히 큰 값으로 초기화
//
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cin >> save_info[i][j];
//			}
//		}
//
//		bfs();
//
//		cout << "Problem" << count++ << ": " << dist[n - 1][n - 1] << "\n";
//	}
//
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <climits>
//
//using namespace std;
//
//int N, M; // 연구소의 크기 N x M
//int safe_zone, max_safe_zone; //safe_zone: 안전지역의 개수, max_safe_zone: 최대 안전지역 개수
//vector<vector<int>> virus_map; // 연구소 지도
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//// 만약 visited를 참조자로 선언하지 않으면, bfs내 함수에서 수정된 값이 반영되지 않음
//// 다시말해 vector<vector<bool>> visited는 bfs내에 있는 모든 변수에 영향을 끼치고 나아가 main함수에도 영향을 미침
//int bfs(int start_x, int start_y, vector<vector<bool>>& visited)
//{
//	int virus_count = 0; // 바이러스가 퍼진 지역 개수 저장
//	queue<pair<int, int>> q;
//	q.push(make_pair(start_x, start_y)); // make_pair는 pair에 값을 넣어줄 떄 사용
//	visited[start_x][start_y] = true; // 시작지점 방문표시
//
//	while (!q.empty())
//	{
//		int current_x = q.front().first; // 현재위치의 행
//		int current_y = q.front().second; // 현재위치의 열
//		q.pop(); // 큐의 현재위치 제거
//
//		// 상하좌우 이동을 위한 for문
//		for (int i = 0; i < 4; i++)
//		{
//			int next_x = current_x + dx[i]; // 다음위치의 행
//			int next_y = current_y + dy[i]; // 다음위치의 열
//			
//			// 다음위치가 연구소 내부인지 확인
//			if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) continue;
//
//			// 다음위치를 아직 방문하지 않았고, 벽이 아닌경우인지 확인
//			if (!visited[next_x][next_y] && virus_map[next_x][next_y] == 0)
//			{
//				visited[next_x][next_y] = true; // 방문표시
//				q.push(make_pair(next_x, next_y)); // 다음위치를 큐에 추가
//				virus_count++; // 바이러스가 퍼진 지역개수 증가
//			}
//		}
//	}
//	return virus_count; // 바이러스가 퍼진 지역개수 반환
//}
//
//void dfs(int x, int y, int wall_count) // x: 벽을 설치할 행, y: 벽을 설치할 열
//{
//	if (wall_count == 3) // 벽 3개 설치 했으면 지역 계산하고 최대 안전지역 갱신
//	{
//		vector<vector<bool>> visited(N, vector<bool>(M, false)); // 방문했는지 안했는지(2차원벡터)
//		int current_safe_zone = safe_zone - wall_count; // 현재 안전지역 개수(벽 3개 뺴고)
//
//		int virus_count = 0; // 바이러스가 퍼진 지역의 개수 저장
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = 0; j < M; j++)
//			{
//				if (!visited[i][j] && virus_map[i][j] == 2)
//				{
//					virus_count += bfs(i, j, visited);
//				}
//			}
//		}
//
//		//현재 안전지역 개수에서 바이러스가 퍼진 지역 개수를 뺀 값 계산하여 최대 안전지역 갱신
//		max_safe_zone = max(max_safe_zone, current_safe_zone - virus_count); //max는 둘 중 큰값 반환
//		return;
//	}
//
//	// 벽 설치
//	for (int i = x; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (i == x && j < y)
//			{
//				continue; // i가 y이면서 j가 x보다 작으면 다시 j에 +1해서 for문 다시 탐
//			}
//
//			if (virus_map[i][j] == 0)
//			{
//				virus_map[i][j] = 1; // 벽 설치
//				dfs(i, j, wall_count + 1); // 재귀 호출해서 다음 벽 설치
//				virus_map[i][j] = 0; // 벽 제거(백트래킹)
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N >> M; // 연구소 크기 입력
//
//	safe_zone = 0; // 초기 안전지역개수 0으로 초기화
//	max_safe_zone = INT_MIN; // 최대 안전지역 개수를 INT의 최솟값(아주 작은값)으로 초기화
//
//	virus_map = vector<vector<int>>(N, vector<int>(M, 0)); // 연구소 지도 2차원 벡터로 초기화
//
//	// 연구소 정보 for문
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> virus_map[i][j];
//			if (virus_map[i][j] == 0) safe_zone++;
//		}
//	}
//
//	int wall_count = 0; // 현재 벽 개수를 0으로 초기화
//	dfs(0, 0, wall_count); // DFS 함수 호출 및 최대 안전지역개수 찾기
//	cout << max_safe_zone << endl;
//
//	return 0;
//}

// 백준 12100 2048

//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//const int MAX_NUM = 20;
//int N;
//vector<vector<int>> board(MAX_NUM, vector<int>(MAX_NUM, 0)); // 블록을 2차원 벡터, 모든요소 0으로 초기화
//
//int dx[] = { 0, 0, 1, -1 }; //좌 우
//int dy[] = { 1, -1, 0, 0 }; //상 하
//
//int maxed_block = 0;
//
//vector<vector<int>> move(vector<vector<int>> state, int direction) // 이동 구현
//{
//	vector<vector<int>> temp_state = state;
//	bool merged[MAX_NUM][MAX_NUM] = { false };
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			int x = i;
//			int y = j;
//			while (true)
//			{
//				int temp_x = x + dx[direction];
//				int temp_y = j + dy[direction];
//
//				if (temp_x < 0 || temp_x >= N || temp_y<0 || temp_y >= N) // NxN 안에 없다면 break
//				{
//					break;
//				}
//
//				if (temp_state[temp_x][temp_y] == 0)
//				{
//					temp_state[temp_x][temp_y] = temp_state[x][y];
//					temp_state[x][y] = 0;
//
//					x = temp_x;
//					y = temp_y;
//				}
//				else if (temp_state[temp_x][temp_y] == temp_state[x][y] && !merged[temp_x][temp_y])
//				{
//					temp_state[temp_x][temp_y] *= 2;
//					temp_state[x][y] = 0;
//					merged[temp_x][temp_y] = true;
//
//					maxed_block = max(maxed_block, temp_state[temp_x][temp_y]);
//					break;
//				}
//				else
//				{
//					break;
//				}
//
//			}
//		}
//	}
//	return temp_state;
//}
//
//int max_block(vector<vector<int>> state) //현재 게임 보드 상태에서 가장 큰 블록값(각 칸 검사, 가장 큰 블록값 찾아 반환)
//{
//	int maxblock = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			maxblock = max(maxblock, state[i][j]); // maxblock에 maxblock과 state[i][j] 중 큰값 반환
//		}
//	}
//	return maxblock;
//}
//
//int bfs() // 5번의 이동을 통해 얻을 수 있는 가장 큰 블록값
//{
//	priority_queue<pair<vector<vector<int>>, int>> pq;
//	pq.push({ board, 0 }); // board의 초기상태에서 시작
//	int result = 0;
//
//	while (!pq.empty())
//	{
//		pair<vector<vector<int>>, int> current_state = pq.top();
//		pq.pop();
//		if (current_state.second == 5)
//		{
//			return maxed_block;
//		}
//
//		for (int i = 0; i < 4; i++)
//		{
//			vector<vector<int>> temp_state = move(current_state.first, i);
//			pq.push({ temp_state, current_state.second + 1 });
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> board[i][j];
//			maxed_block = max(maxed_block, board[i][j]);
//		}
//	}
//
//	int answer = bfs();
//	cout << answer;
//	return 0;
//}

// 백준 3985 좋은단어
//#include <iostream>
//#include <stack>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	string input_word;
//	int nof_good_word = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input_word;
//		stack<char> stk;
//
//		for (char a : input_word)
//		{
//			if (stk.size() && stk.top() == a) stk.pop();
//
//			else stk.push(a);
//		}
//
//		if (stk.size() == 0) nof_good_word++;
//	}
//
//	cout << nof_good_word;
//	return 0;
//}

////백준 2636 치즈 DFS
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int a[104][104], visited[104][104];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int n, m, cnt, cnt2;
//vector<pair<int, int>> v;
//
//void go(int x, int y)
//{
//	visited[x][y] = 1;
//	if (a[x][y] == 1) // 만약 a[x][y]가 치즈면
//	{
//		v.push_back({ x, y }); //push_back()을 통해 벡터 v에 매개변수 x와 y를 넣고
//		return; // dfs 종료
//	}
//
//	for (int i = 0; i < 4; i++) // 상하좌우 4개 일반적인 dfs, bfs
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//		//ny < 0 || ny >= n || nx < 0 || nx >= m "overflow 처리"
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
//		go(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	while (true) // 치즈가 녹고 확인하고 치즈가 녹고 확인하고, 1/0 반복 확인을 위해 while(true)
//	{
//		cnt2 = 0;
//		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0); //초기화(test case마다 초기화가 중요함)
//		v.clear(); //녹아져야할 1을 한공간(vector v)에 담아서 한번에 녹임
//		go(0, 0); //끝지점 기반으로(0, 1)(1, 0)도 상관없긴 함
//
//		for (pair<int, int> b : v)
//		{
//			cnt2++; //모두 녹기전 한시간전에 남아있는 치즈조각 체크
//			a[b.first][b.second] = 0; //치즈를 없앤다(녹인다) -> 0으로 만듦
//		}
//
//		bool flag = 0; // 치즈가 다 녹았나 안녹았나 체크
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (a[i][j] != 0) flag = 1;
//			}
//		}
//		cnt++; // 치즈를 녹이기 위해 몇번의 go함수를 실행했냐
//		if (!flag) break; // 치즈가 다 녹으면 flag로 break
//	}
//	cout << cnt << "\n" << cnt2 << "\n";
//	return 0;
//}
//
//// 백준 2636 치즈 BFS
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int a[104][104]; // a[i][j]가 0이면 녹일 치즈 없고, a[i][j]가 1이면 녹일 치즈가 있는거
//int n, m;
//vector<pair<int, int>> cheese;
//
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//bool is_inside(int x, int y) {
//    return (x >= 0 && x < n&& y >= 0 && y < m);
//}
//
//void bfs() {
//    queue<pair<int, int>> q;
//    vector<pair<int, int>> to_melt;
//
//    q.push({ 0, 0 });
//    vector<vector<bool>> visited(n, vector<bool>(m, false));
//    visited[0][0] = true;
//
//    while (!q.empty()) {
//        int x = q.front().first;
//        int y = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (is_inside(nx, ny) && !visited[nx][ny]) {
//                if (a[nx][ny] == 0) {
//                    visited[nx][ny] = true;
//                    q.push({ nx, ny });
//                }
//                else {
//                    to_melt.push_back({ nx, ny });
//                }
//            }
//        }
//    }
//
//    for (const pair<int, int>& p : to_melt) {
//        a[p.first][p.second] = 0;
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//            if (a[i][j] == 1) {
//                cheese.push_back({ i, j });
//            }
//        }
//    }
//
//    int time = 0;
//    int last_cheese = 0;
//
//    while (!cheese.empty()) {
//        last_cheese = cheese.size();
//        bfs();
//        time++;
//        vector<pair<int, int> >::iterator it = cheese.begin();
//        while (it != cheese.end()) {
//            int x = it->first;
//            int y = it->second;
//            if (a[x][y] == 1) {
//                it++;
//            }
//            else {
//                it = cheese.erase(it);
//            }
//        }
//    }
//
//    cout << time << "\n" << last_cheese << "\n";
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int original_map_info[1024][1024];
//int visited[1024][1024]; // 방문하면 1로 표시
//vector<pair<int, int>> all_clear_info; // 2차원 배열은 pair사용
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int n, m; // n x m행렬
//int cnt = 0, cnt2 = 0;
//
//void go(int x, int y)
//{
//	visited[x][y] = 2; // 방문한 곳은 2로 초기화
//	if (original_map_info[x][y] == 1)
//	{
//		all_clear_info.push_back({ x, y });
//		return;
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx<0 || nx>n || ny<0 || ny>m || &visited[nx][ny]) continue;
//		go(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> original_map_info[i][j];
//		}
//	}
//
//	while (true)
//	{
//		fill(&visited[0][0], &visited[0][0] + 1024 * 1024, 0);
//		all_clear_info.clear();
//		go(0, 0);
//
//		for (pair<int, int> last_before : all_clear_info)
//		{
//			cnt2++; //1이 모두 없어지기 전의 1의 개수를 확인하기 위함
//			original_map_info[last_before.first][last_before.second] = 0;
//		}
//		bool flag = 0; // while문 탈출 조건
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (original_map_info[i][j] == 1);
//				flag = 1;
//			}
//			cnt++;
//			if (flag == 1)
//				break;
//		}
//	}
//	cout << cnt << '\n' << cnt2;
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//int n, m; // n x m 행렬
//int original_map[101][101];
//int visited[101][101];
//vector<pair<int, int>> make_zero;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int all_time, before_one_hour;
//
//void go(int x, int y)
//{
//	visited[x][y] = 2; // 방문하면 2로 처리
//	if (original_map[x][y] == 1) // 원래 map에 1이 있다면
//	{
//		make_zero.push_back({ x, y });
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) //좌표이동
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
//		go(nx, ny);
//		cout << "nx, ny는 각각" << nx << ny << endl;
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> original_map[i][j];
//		}
//	}
//	while (true)
//	{
//		before_one_hour = 0;
//		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//		make_zero.clear();
//		go(0, 0);
//
//		for (pair<int, int>last_before_cheese : make_zero)
//		{
//			before_one_hour++;
//			original_map[last_before_cheese.first][last_before_cheese.second] = 0;
//			cout << "befor_one_hour는 " << before_one_hour << endl;
//		}
//
//		bool flag = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (original_map[i][j] != 0) flag = 1;
//			}
//		}
//
//		all_time++;
//		cout << "all_time은 현재" << all_time;
//		if (!flag) break;
//	}
//	cout << all_time << '\n' << before_one_hour << '\n';
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n, m;
//int original_map[101][101];
//int visited[101][101];
//vector<pair<int, int>> make_zero;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int total_time, nof_one;
//
//void go(int x, int y)
//{
//	visited[x][y] = 2; // 방문했으면 2로 초기화
//	if (original_map[x][y] == 1)
//		{
//			make_zero.push_back({ x, y });
//			return;
//		}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//
//		if (nx<0 || nx>=n || ny<0 || ny>=m || visited[nx][ny]) continue;
//		go(nx, ny);
//	}
//	return;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> original_map[i][j];
//		}
//	}
//
//	while (true)
//	{
//		nof_one = 0;
//		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//		make_zero.clear();
//		go(0, 0);
//
//		for (pair<int, int> last_nof_one : make_zero)
//		{
//			nof_one++;
//			original_map[last_nof_one.first][last_nof_one.second] = 0;
//		}
//
//		bool flag = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++) {
//				if (original_map[i][j] == 1)
//				{
//					flag = 1;
//				}
//			}
//		}
//		total_time++;
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//	cout << total_time << '\n' << nof_one;
//	return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//int input_mirro_size, input_attend_man, input_game_time; // n: 미로의 크기, m: 참가자의 수, k: 게임시간
//int original_map[11][11];
//
//char attend_info[11][11]; int exit_info[11][11];
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//vector<pair<char, char>> check_point;
//
//void go(int x, int y)
//{
//	attend_info[x][y] = 'c';
//	
//	if (original_map[x][y] == 'c')
//	{
//		check_point.push_back({ x, y });
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		int next_y = dy[i] + y;
//		int next_x = dx[i] + x;
//
//		if (next_x < 0 || next_x >= input_mirro_size || next_y < 0 || next_y >= input_mirro_size) continue;
//		go(next_x, next_y);
//	}
//}
//
//
//int main()
//{
//	cin >> input_mirro_size >> input_attend_man >> input_game_time;
//	for (int i = 0; i < input_mirro_size; i++)
//	{
//		for (int j = 0; j < input_mirro_size; j++)
//		{
//			original_map[i][j];
//		}
//	}
//
//	for (int i = 0; i < input_attend_man; i++)
//	{
//		cin >> attend_info[i][i];
//	}
//	cin >> exit_info[input_mirro_size][input_mirro_size];
//
//	while (true)
//	{
//		fill(&attend_info[0][0], &attend_info[0][0] + 11 * 11, 0);
//		go(0, 0);
//	}
//	
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//queue<pair <int, int>> man_locate;
//int exit[11][11];
//int original_map[11][11];
//vector<pair<int, int>> info_man_loca;
//vector<pair<int, int>> exit_info;
//int n, m, k, destination;
//static int dist = 0;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//void minimum_root(int x, int y)
//{
//	info_man_loca.push_back({ temp_man, temp_man2 });
//
//	return;
//}
//
//void move(int x, int y) 
//{
//	info_man_loca.push_back({ x, y });
//}
//
//void break_wall()
//{
//
//}
//
//void turn()
//{
//
//}
//
//
//
//int main()
//{
//	cin >> n >> m >> k; // 미로크기, 참가자 수, 게임시간 입력
//	for (int i = 0; i < n; i++) // 배열 크기 입력
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> original_map[i][j];
//		}
//	}
//
//	for (int i = 0; i < m; i++) // 사람들의 좌표 입력
//	{
//		int temp_man, temp_man2;
//		cin >> temp_man >> temp_man2;
//		info_man_loca.push_back({ temp_man, temp_man2 });
//		move(0, 0);
//	}
//
//	int temp_exit_info, temp_exit_info2;
//	cin >> temp_exit_info >> temp_exit_info2;  // exit 좌표 입력
//	exit_info.push_back({ temp_exit_info, temp_exit_info2 });
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int total_distance;
//vector<pair<int, int>> exit_info;
//int n, m, k; // 입력값 n: 
//int now_time; int mirro_info[11][11];
//vector<pair<int, int>> attend_info;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//
//int dx2[] = { 0, -1, 0, 1 };
//int dy2[] = { -1, 0, 1, 0 };
//
//
//int visited[11][11];
//
//void bfs()
//{
//	int length = attend_info.size(); // 첫 번째 attend_info가 (1, 3)
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int nx = dx[j] + attend_info[i].first; // attend_info[i].first = 1 // 1이되고
//			int ny = dy[j] + attend_info[i].second; // attend_info[i].second = 3 // 4됨
//
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n || mirro_info[nx][ny] != 0) continue;
//
//			int short_exit = abs(attend_info[i].first - exit_info[0].first) + abs(attend_info[i].first - exit_info[0].second); // 출구와의 최단거리 
//			int short_next = abs(nx - exit_info[0].first) + abs(ny - exit_info[0].second); // 이동한거에 최단거리
//			
//			if (short_exit < short_next) // 경로를 잘 찾은경우
//			{
//				attend_info[i].first = nx;
//				attend_info[i].second = ny;
//
//				if (attend_info[i].first == exit_info[0].first || attend_info[i].second == exit_info[0].second)
//				{
//					attend_info.pop_back(); // 만약 출구로 잘 찾아갔다면 그 사람 지워
//				}
//				
//				break;
//			}
//					
//		}
//	}
//}
//
//// 좌표의 범위를 벗어나는가에 대한 조건
//if (nX < 0 || nX >= N || nY < 0 || nY >= N)
//	continue;
//
//
//void bfs2(int x, int y)
//{
//	bool visited[11][11]; // 방문처리
//	queue<pair<int, int>> q; // 담을녀석
//	q.push({ x, y });
//	visited[x][y] = true;
//
//	// 참가자를 찾았다면 bfs 종료시켜야함
//	bool isFind = false;
//	// 
//	//int findAttend[2];
//	vector<pair<int, int>> findAttend;
//	
//	while (!q.empty() && !isFind)
//	{
//		int current_x = q.front().first;
//		int current_y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nx = current_x + dx2[i];
//			int ny = current_y + dy2[i];
//			if (nx < 0 || nx > n || ny<0 || ny>n || visited[nx][ny] || mirro_info[nx][ny] > 0) continue;
//			
//			for (int j = 0; j < attend_info.size(); j++) 
//			{
//				if (nx == attend_info[j].first && ny == attend_info[j].second) 
//				{
//					findAttend.push_back({ nx, ny });
//					isFind = true;
//					break;
//				}
//			}
//			q.push({ nx, ny });
//			visited[nx][ny] = true;
//		}
//
//	}
//
//}
//
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> mirro_info[i][j];
//		}
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int temp_attend_info, temp_attend_info2;
//		cin >> temp_attend_info >> temp_attend_info2;
//		attend_info.push_back({ temp_attend_info, temp_attend_info2 });
//	}
//
//	int temp_exit_info, temp_exit_info2; //첫 번째는 x좌표, 두 번째는 y좌표
//	cin >> temp_exit_info >> temp_exit_info2;
//	exit_info.push_back({ temp_exit_info, temp_exit_info2 });
//
//	while (true) // attend_info는 참가자의 좌표정보다.
//	{
//		bfs();
//		if (k == 0) break;
//		if (attend_info.empty()) break;
//
//		bfs2(temp_exit_info, temp_exit_info2);
//	}
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//int m, n;
//int dx[] = { 0, 0, -1, 1 };
//int dy[] = { 1, -1, 0, 0 };
//int cnt = 0;
//queue<pair<int, int>> q;
//int tomato[1001][1001];
//
//void bfs()
//{
//	int day = 0;
//	
//	while (!q.empty())
//	{
//		for (int j = 0; j < q.size(); j++)
//		{
//			pair<int, int> current_tomato = q.front();
//			int current_x = current_tomato.first;
//			int current_y = current_tomato.second;
//			q.pop();
//		 
//			for (int i = 0; i < 4; i++)
//			{
//				int ny = current_y + dy[i];
//				int nx = current_x + dx[i];
//
//				if (nx<0 || nx>n || ny<0 || ny>m || tomato[nx][ny] == -1 || tomato[nx][ny] == 1) continue;
//
//				if (tomato[nx][ny] == 0)
//				{
//					q.push({ nx, ny });
//					tomato[nx][ny] = 1;
//				}
//
//			}
//		}
//		if(!q.empty()) cnt++;
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> tomato[i][j];
//			if (tomato[i][j] == 1)
//			{
//				q.push({ i, j });
//			}
//		}
//	}
//	bfs();
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (tomato[i][j] == 0) cnt = -1;
//		}
//	}
//
//	cout << cnt;
//	return 0;
//}
