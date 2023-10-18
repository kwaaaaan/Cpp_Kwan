//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int a, int b)
//{
//	return a < b; // �������� ����
//	//return a > b; // �������� ����
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

// �Ǻ���ġ ����
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
//	cout << dp(50); // 50�� �Ǹ� runtime����, overflow�߻���
//	return 0;
//}

// �Ǻ���ġ ���� �ذ� Dynamic Programin(���̳��� ���α׷���, DP)
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

// DP ���� 11726, 2xn Ÿ�ϸ� --> �Ǻ���ġ ������ ����
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
//	if (d[x] != 0) return d[x]; // ������ ���Ѱ��� �ִٸ� �״�� ��ȯ
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

// DP ���� 11727, 2xn Ÿ�ϸ� 2
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

// DP ���� 2133, Ÿ�� ä���
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



// ������ ���� ������� �����ϴ� ���α׷�
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
//		Student("������", 90),
//		Student("�輺��", 17),
//		Student("�̱���", 34),
//		Student("�ִ���", 13),
//		Student("������", 97),
//		Student("������", 99),
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

// class�� ������� �ʰ� ����
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<pair<int, string>> v; //�ѽ��� �����͸� �ٷ�� ���ؼ� pair�� ��, �ѽ��� �����͸� int�� string���� ������
//	v.push_back(pair<int, string>(90, "������"));
//	v.push_back(pair<int, string>(70, "�輺��"));
//	v.push_back(pair<int, string>(86, "�̱���"));
//	v.push_back(pair<int, string>(99, "������"));
//	v.push_back(pair<int, string>(17, "������"));
//
//	sort(v.begin(), v.end());
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].second << ' ' << v[i].first << endl; //second�� �ι�° ����� string�� �ǹ��� --> �̸���(first�� int��, 90��)
//	}
//	return 0;
//}

// 3���� �����ڰ� �ְ�, �ΰ��� ���Ͽ� �����ϴ� ���α׷���
// ������ ������ ���̰� ����� ���� �迭

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
//	vector<pair<string, pair<int, int>>> v; //�ѽ��� �����͸� �ٷ�� ���ؼ� pair�� ��, �ѽ��� �����͸� int�� string���� ������
//	v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(90, 940626)));
//	v.push_back(pair<string, pair<int, int>>("�ִ���", pair<int, int>(93, 930727)));
//	v.push_back(pair<string, pair<int, int>>("�̱���", pair<int, int>(89, 920222)));
//	v.push_back(pair<string, pair<int, int>>("������", pair<int, int>(90, 940828)));
//	v.push_back(pair<string, pair<int, int>>("�輺��", pair<int, int>(90, 940103)));
//
//	sort(v.begin(), v.end(), compare);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i].first << v[i].second.first << ' ' << v[i].second.second << endl; //second�� �ι�° ����� string�� �ǹ��� --> �̸���(first�� int��, 90��)
//	}
//	return 0;
//}

// ��(heap)����
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

// ���� �ܾ����� 1181
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
//		return a < b; // string�� ���� ���������� �����ϰ� ��
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
//		cout << q.front() << ' '; //�����ִ°� 4�� 6
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
//int number = 7; //������ ����
//int c[7]; //�湮 ó�� check
//vector<int> a[8]; // 7+1�� 8�� ũ��� ���͸� ���� -> �� ����� �ε����� 1���� ä���� �� �ֵ��� ������ذ�(�ε����� 0���� �ϱ�)
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
//				c[y] = true; //�湮ó��
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

// �ϳ��� ��� ������ �����մϴ�.
//typedef struct node *treePointer;
//typedef struct node
//{
//	int data;
//	treePointer leftChild, rightChild;
//} node;
//
//void preorder(treePointer ptr)
//{
//	if (ptr) // null���� �ƴ϶��
//	{
//		cout << ptr->data << ' ';
//		preorder(ptr->leftChild);
//		preorder(ptr->rightChild);
//	}
//}
//void inorder(treePointer ptr)
//{
//	if (ptr) // null���� �ƴ϶��
//	{
//		inorder(ptr->leftChild);
//		cout << ptr->data << ' ';
//		inorder(ptr->rightChild);
//	}
//}
//void postorder(treePointer ptr)
//{
//	if (ptr) // null���� �ƴ϶��
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
	//vector<int> nums(10000, 1); //10000���� ��� �ȿ� 1�� ���ִ� ����
	//nums.push_back(2); // emplace_back ���� ����
	//nums.pop_back();

	//nums.emplace(nums.begin(), 3); //�� ù��°�� 3�� �־���
	//nums.erase(nums.begin()); // �� ù��°�� ���Ҹ� ������


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

//// Ȧ���� ���ϱ�
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
//#include <cstring>  // memset�� ����ϱ� ���� ��� ����
//using namespace std;
//
//int N, K, answer;  // N: ������ ũ��, K: �� �ı� ������ ����, answer: ���� ����
//int maps[10][10];  // ���� ������ �����ϴ� �迭
//bool visited[10][10];  // �湮 ���θ� �����ϴ� �迭
//int dy[] = { -1, 1, 0, 0 };  // �����¿� �̵��� ���� �迭
//int dx[] = { 0, 0, -1, 1 };
//
//// DFS �Լ� ����
//void dfs(int r, int c, int cnt, bool isUsed) {
//    answer = max(answer, cnt);  // ��������� ���� ���� �� �ִ밪 ������Ʈ
//    visited[r][c] = true;  // ���� ��ġ�� �湮�ߴٰ� ǥ��
//
//    for (int d = 0; d < 4; d++) {  // �����¿� 4���⿡ ���ؼ�
//        int nr = r + dy[d];
//        int nc = c + dx[d];
//
//        if (nr < 0 || nc < 0 || nr >= N || nc >= N)  // ���� ������ ����� ����
//            continue;
//
//        if (visited[nr][nc])  // �̹� �湮�� ���̸� ����
//            continue;
//
//        if (maps[nr][nc] < maps[r][c])  // ���� ��ġ���� ���� ���̸� �̵�
//            dfs(nr, nc, cnt + 1, isUsed);
//        else {
//            if (!isUsed && maps[nr][nc] - K < maps[r][c]) {  // ���� �� �ı� ��ȸ�� �ְ�, ���� �ļ� �� �� �ִٸ�
//                int tmp = maps[nr][nc];  // ���� ��ġ�� ���̸� �ӽ÷� ����
//                maps[nr][nc] = maps[r][c] - 1;  // ���� �İ� �̵�
//                dfs(nr, nc, cnt + 1, true);  // DFS ��� ȣ��
//                maps[nr][nc] = tmp;  // �� �ı� �۾��� ������� �ǵ���
//            }
//        }
//    }
//
//    visited[r][c] = false;  // �湮 ���θ� �ٽ� �ʱ�ȭ�Ͽ� �ٸ� ��η��� Ž���� ���
//}
//
//int main() {
//    int T;
//    cin >> T;  // �׽�Ʈ ���̽��� ���� �Է�
//
//    for (int tc = 1; tc <= T; tc++) {
//        cin >> N >> K;  // ���� ũ��� �� �ı� ������ ���� �Է�
//        answer = 0;
//        memset(visited, false, sizeof(visited));  // visited �迭 �ʱ�ȭ
//        vector<pair<int, int>> highPeaks;  // �ְ� ���츮�� ��ǥ�� �����ϴ� ����
//        int maxHeight = 0;  // �ְ� ���� �ʱ�ȭ
//
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                cin >> maps[i][j];  // ���� ���� �Է�
//
//                // �ְ� ���츮�� ���̸� ã��
//                if (maps[i][j] < maxHeight)
//                    continue;
//                else if (maps[i][j] > maxHeight) {
//                    maxHeight = maps[i][j];
//                    highPeaks.clear();  // �ְ� ���츮�� ���ŵǸ� ���͸� ���
//                }
//
//                highPeaks.push_back(make_pair(i, j));  // �ְ� ���츮�� ��ǥ ����
//            }
//        }
//
//        // ��� �ְ� ���츮�� ���� ���� ���� �ùķ��̼��� ����
//        for (const auto& peak : highPeaks)
//            dfs(peak.first, peak.second, 1, false);
//
//        cout << "#" << tc << " " << answer << endl;  // ��� ���
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
//vector<int>map[101]; // �׷����� ��Ÿ���� ��������Ʈ, a[i]���� ��� i�� ����� ������ ����Ʈ ����
//bool check[101]; // ����� �湮����
//int cnt = 0; // ��� �� ����
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

// ���� ����ũ
//MAP[MAX][MAX] ���� �� ĭ�� �����ϴ� �������� ���̵��� ����� �ֱ��� !
//
//Energy[MAX][MAX] ���� �� ĭ�� �����ϴ� ����� ���� ����� �ֱ��� !
//
//Insert_Energy[MAX][MAX] ���� �� ĭ�� �ų⸶�� �߰��Ǵ� ����� ���� ����Ǿ� �ֱ��� !

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
//			energy[i][j] = 5; // ��� input
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
//int N, M, K; // N: �迭 ũ��, M: �ʱ� ������ ��, K: �ùķ��̼� �ݺ�Ƚ��
//int A[MAX_N][MAX_N]; // A: ���
//int land[MAX_N][MAX_N]; //land: �����ִ� ���
//vector<int> trees[MAX_N][MAX_N]; // �� ĭ���ִ� �������� ����
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


// ���� 1202 ��������
//#include <iostream>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int N; // ������ ����
//int K; // ������ ����
//
//vector<pair<int, int>> jewelry; // ������ ���Կ� ����
//vector<int> bag; // ������ ���밡���� �ִ빫��
//priority_queue<int, vector<int>, less<int>> pq; // ���濡 ���� �� �ִ� ������ ��ġ�� �������� ����
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
//			pq.push(jewelry[index].second); // queue���� push, vector���� push_back
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

// ���� 1260, DFS�� BFS, queue ���
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//
//using namespace std;
//
//vector<int> e[1001];
//bool check[1001];
//static int N, M, V; // N: ������ ����, M: ������ ����, V: Ž�� ���۹�ȣ
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
//void bfs(int v) // bfs�� queue(priority_queue ���, �̴� �迭��)
//{
//	//priority_queue<int> pq;
//
//	queue<int> q;
//	q.push(v);
//	check[v] = true;
//
//	while (!q.empty())
//	{
//		int cur = q.front(); // q�� ù��° ��Ҹ� cur�� ����
//		q.pop(); // q�� �� ������� ������
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
//	memset(check, false, sizeof(check));//memset --> check �迭�� false�� �ʱ�ȭ��, check�� 1001�� ��Ҹ�		
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
//int dx[4] = { 1, -1, 0, 0 }; // ��, ��
//int dy[4] = { 0, 0, 1, -1 }; // ��, ��
//int n;
//
//vector<vector<int>> save_info; // �̷� ���� �� ����ġ ���� ����
//vector<vector<int>> dist; // ����������� �� ��ġ���� �ִܰŸ� ����
//
//void bfs()
//{
//	queue<pair<int, int>> pq;
//	pq.push(make_pair(0, 0)); // �������� �߰�
//	dist[0][0] = save_info[0][0];
//
//	while (!pq.empty())
//	{
//		int y = pq.front().first;
//		int x = pq.front().second;
//		pq.pop();
//
//		for (int i = 0; i < 4; i++) // �����¿� �̵�
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
//		save_info.assign(n, vector<int>(n, 0)); //save_info�� ũ�⸦ n �׸��� n���� ���Ҹ� ������ ��簪�� 0���� �ʱ�ȭ��
//		dist.assign(n, vector<int>(n, 2000000000)); // ����� ū ������ �ʱ�ȭ
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
//int N, M; // �������� ũ�� N x M
//int safe_zone, max_safe_zone; //safe_zone: ���������� ����, max_safe_zone: �ִ� �������� ����
//vector<vector<int>> virus_map; // ������ ����
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//// ���� visited�� �����ڷ� �������� ������, bfs�� �Լ����� ������ ���� �ݿ����� ����
//// �ٽø��� vector<vector<bool>> visited�� bfs���� �ִ� ��� ������ ������ ��ġ�� ���ư� main�Լ����� ������ ��ħ
//int bfs(int start_x, int start_y, vector<vector<bool>>& visited)
//{
//	int virus_count = 0; // ���̷����� ���� ���� ���� ����
//	queue<pair<int, int>> q;
//	q.push(make_pair(start_x, start_y)); // make_pair�� pair�� ���� �־��� �� ���
//	visited[start_x][start_y] = true; // �������� �湮ǥ��
//
//	while (!q.empty())
//	{
//		int current_x = q.front().first; // ������ġ�� ��
//		int current_y = q.front().second; // ������ġ�� ��
//		q.pop(); // ť�� ������ġ ����
//
//		// �����¿� �̵��� ���� for��
//		for (int i = 0; i < 4; i++)
//		{
//			int next_x = current_x + dx[i]; // ������ġ�� ��
//			int next_y = current_y + dy[i]; // ������ġ�� ��
//			
//			// ������ġ�� ������ �������� Ȯ��
//			if (next_x < 0 || next_x >= N || next_y < 0 || next_y >= M) continue;
//
//			// ������ġ�� ���� �湮���� �ʾҰ�, ���� �ƴѰ������ Ȯ��
//			if (!visited[next_x][next_y] && virus_map[next_x][next_y] == 0)
//			{
//				visited[next_x][next_y] = true; // �湮ǥ��
//				q.push(make_pair(next_x, next_y)); // ������ġ�� ť�� �߰�
//				virus_count++; // ���̷����� ���� �������� ����
//			}
//		}
//	}
//	return virus_count; // ���̷����� ���� �������� ��ȯ
//}
//
//void dfs(int x, int y, int wall_count) // x: ���� ��ġ�� ��, y: ���� ��ġ�� ��
//{
//	if (wall_count == 3) // �� 3�� ��ġ ������ ���� ����ϰ� �ִ� �������� ����
//	{
//		vector<vector<bool>> visited(N, vector<bool>(M, false)); // �湮�ߴ��� ���ߴ���(2��������)
//		int current_safe_zone = safe_zone - wall_count; // ���� �������� ����(�� 3�� ����)
//
//		int virus_count = 0; // ���̷����� ���� ������ ���� ����
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
//		//���� �������� �������� ���̷����� ���� ���� ������ �� �� ����Ͽ� �ִ� �������� ����
//		max_safe_zone = max(max_safe_zone, current_safe_zone - virus_count); //max�� �� �� ū�� ��ȯ
//		return;
//	}
//
//	// �� ��ġ
//	for (int i = x; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			if (i == x && j < y)
//			{
//				continue; // i�� y�̸鼭 j�� x���� ������ �ٽ� j�� +1�ؼ� for�� �ٽ� Ž
//			}
//
//			if (virus_map[i][j] == 0)
//			{
//				virus_map[i][j] = 1; // �� ��ġ
//				dfs(i, j, wall_count + 1); // ��� ȣ���ؼ� ���� �� ��ġ
//				virus_map[i][j] = 0; // �� ����(��Ʈ��ŷ)
//			}
//		}
//	}
//}
//
//int main()
//{
//	cin >> N >> M; // ������ ũ�� �Է�
//
//	safe_zone = 0; // �ʱ� ������������ 0���� �ʱ�ȭ
//	max_safe_zone = INT_MIN; // �ִ� �������� ������ INT�� �ּڰ�(���� ������)���� �ʱ�ȭ
//
//	virus_map = vector<vector<int>>(N, vector<int>(M, 0)); // ������ ���� 2���� ���ͷ� �ʱ�ȭ
//
//	// ������ ���� for��
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			cin >> virus_map[i][j];
//			if (virus_map[i][j] == 0) safe_zone++;
//		}
//	}
//
//	int wall_count = 0; // ���� �� ������ 0���� �ʱ�ȭ
//	dfs(0, 0, wall_count); // DFS �Լ� ȣ�� �� �ִ� ������������ ã��
//	cout << max_safe_zone << endl;
//
//	return 0;
//}

// ���� 12100 2048

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
//vector<vector<int>> board(MAX_NUM, vector<int>(MAX_NUM, 0)); // ����� 2���� ����, ����� 0���� �ʱ�ȭ
//
//int dx[] = { 0, 0, 1, -1 }; //�� ��
//int dy[] = { 1, -1, 0, 0 }; //�� ��
//
//int maxed_block = 0;
//
//vector<vector<int>> move(vector<vector<int>> state, int direction) // �̵� ����
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
//				if (temp_x < 0 || temp_x >= N || temp_y<0 || temp_y >= N) // NxN �ȿ� ���ٸ� break
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
//int max_block(vector<vector<int>> state) //���� ���� ���� ���¿��� ���� ū ��ϰ�(�� ĭ �˻�, ���� ū ��ϰ� ã�� ��ȯ)
//{
//	int maxblock = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			maxblock = max(maxblock, state[i][j]); // maxblock�� maxblock�� state[i][j] �� ū�� ��ȯ
//		}
//	}
//	return maxblock;
//}
//
//int bfs() // 5���� �̵��� ���� ���� �� �ִ� ���� ū ��ϰ�
//{
//	priority_queue<pair<vector<vector<int>>, int>> pq;
//	pq.push({ board, 0 }); // board�� �ʱ���¿��� ����
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

// ���� 3985 �����ܾ�
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

////���� 2636 ġ�� DFS
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
//	if (a[x][y] == 1) // ���� a[x][y]�� ġ���
//	{
//		v.push_back({ x, y }); //push_back()�� ���� ���� v�� �Ű����� x�� y�� �ְ�
//		return; // dfs ����
//	}
//
//	for (int i = 0; i < 4; i++) // �����¿� 4�� �Ϲ����� dfs, bfs
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//		//ny < 0 || ny >= n || nx < 0 || nx >= m "overflow ó��"
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
//	while (true) // ġ� ��� Ȯ���ϰ� ġ� ��� Ȯ���ϰ�, 1/0 �ݺ� Ȯ���� ���� while(true)
//	{
//		cnt2 = 0;
//		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0); //�ʱ�ȭ(test case���� �ʱ�ȭ�� �߿���)
//		v.clear(); //��������� 1�� �Ѱ���(vector v)�� ��Ƽ� �ѹ��� ����
//		go(0, 0); //������ �������(0, 1)(1, 0)�� ������� ��
//
//		for (pair<int, int> b : v)
//		{
//			cnt2++; //��� ����� �ѽð����� �����ִ� ġ������ üũ
//			a[b.first][b.second] = 0; //ġ� ���ش�(���δ�) -> 0���� ����
//		}
//
//		bool flag = 0; // ġ� �� ��ҳ� �ȳ�ҳ� üũ
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (a[i][j] != 0) flag = 1;
//			}
//		}
//		cnt++; // ġ� ���̱� ���� ����� go�Լ��� �����߳�
//		if (!flag) break; // ġ� �� ������ flag�� break
//	}
//	cout << cnt << "\n" << cnt2 << "\n";
//	return 0;
//}
//
//// ���� 2636 ġ�� BFS
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int a[104][104]; // a[i][j]�� 0�̸� ���� ġ�� ����, a[i][j]�� 1�̸� ���� ġ� �ִ°�
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
//int visited[1024][1024]; // �湮�ϸ� 1�� ǥ��
//vector<pair<int, int>> all_clear_info; // 2���� �迭�� pair���
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int n, m; // n x m���
//int cnt = 0, cnt2 = 0;
//
//void go(int x, int y)
//{
//	visited[x][y] = 2; // �湮�� ���� 2�� �ʱ�ȭ
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
//			cnt2++; //1�� ��� �������� ���� 1�� ������ Ȯ���ϱ� ����
//			original_map_info[last_before.first][last_before.second] = 0;
//		}
//		bool flag = 0; // while�� Ż�� ����
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
//int n, m; // n x m ���
//int original_map[101][101];
//int visited[101][101];
//vector<pair<int, int>> make_zero;
//int dx[] = { 0, 0, 1, -1 };
//int dy[] = { 1, -1, 0, 0 };
//int all_time, before_one_hour;
//
//void go(int x, int y)
//{
//	visited[x][y] = 2; // �湮�ϸ� 2�� ó��
//	if (original_map[x][y] == 1) // ���� map�� 1�� �ִٸ�
//	{
//		make_zero.push_back({ x, y });
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) //��ǥ�̵�
//	{
//		int nx = dx[i] + x;
//		int ny = dy[i] + y;
//
//		if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny]) continue;
//		go(nx, ny);
//		cout << "nx, ny�� ����" << nx << ny << endl;
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
//			cout << "befor_one_hour�� " << before_one_hour << endl;
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
//		cout << "all_time�� ����" << all_time;
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
//	visited[x][y] = 2; // �湮������ 2�� �ʱ�ȭ
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
//int input_mirro_size, input_attend_man, input_game_time; // n: �̷��� ũ��, m: �������� ��, k: ���ӽð�
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
//	cin >> n >> m >> k; // �̷�ũ��, ������ ��, ���ӽð� �Է�
//	for (int i = 0; i < n; i++) // �迭 ũ�� �Է�
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> original_map[i][j];
//		}
//	}
//
//	for (int i = 0; i < m; i++) // ������� ��ǥ �Է�
//	{
//		int temp_man, temp_man2;
//		cin >> temp_man >> temp_man2;
//		info_man_loca.push_back({ temp_man, temp_man2 });
//		move(0, 0);
//	}
//
//	int temp_exit_info, temp_exit_info2;
//	cin >> temp_exit_info >> temp_exit_info2;  // exit ��ǥ �Է�
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
//int n, m, k; // �Է°� n: 
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
//	int length = attend_info.size(); // ù ��° attend_info�� (1, 3)
//	for (int i = 0; i < length; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int nx = dx[j] + attend_info[i].first; // attend_info[i].first = 1 // 1�̵ǰ�
//			int ny = dy[j] + attend_info[i].second; // attend_info[i].second = 3 // 4��
//
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n || mirro_info[nx][ny] != 0) continue;
//
//			int short_exit = abs(attend_info[i].first - exit_info[0].first) + abs(attend_info[i].first - exit_info[0].second); // �ⱸ���� �ִܰŸ� 
//			int short_next = abs(nx - exit_info[0].first) + abs(ny - exit_info[0].second); // �̵��Ѱſ� �ִܰŸ�
//			
//			if (short_exit < short_next) // ��θ� �� ã�����
//			{
//				attend_info[i].first = nx;
//				attend_info[i].second = ny;
//
//				if (attend_info[i].first == exit_info[0].first || attend_info[i].second == exit_info[0].second)
//				{
//					attend_info.pop_back(); // ���� �ⱸ�� �� ã�ư��ٸ� �� ��� ����
//				}
//				
//				break;
//			}
//					
//		}
//	}
//}
//
//// ��ǥ�� ������ ����°��� ���� ����
//if (nX < 0 || nX >= N || nY < 0 || nY >= N)
//	continue;
//
//
//void bfs2(int x, int y)
//{
//	bool visited[11][11]; // �湮ó��
//	queue<pair<int, int>> q; // �����༮
//	q.push({ x, y });
//	visited[x][y] = true;
//
//	// �����ڸ� ã�Ҵٸ� bfs ������Ѿ���
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
//	int temp_exit_info, temp_exit_info2; //ù ��°�� x��ǥ, �� ��°�� y��ǥ
//	cin >> temp_exit_info >> temp_exit_info2;
//	exit_info.push_back({ temp_exit_info, temp_exit_info2 });
//
//	while (true) // attend_info�� �������� ��ǥ������.
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
