////
////#include <iostream>
////#include <vector>
////#include <algorithm>
////#include <queue>
////
////using namespace std;
////
////int n, m;
////
////int dx[] = { 0, 0, -1, 1, -1, 1, -1, 1 };
////int dy[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
////
////
////void bfs(int x, int y, int visited_check[50][50], int map[50][50])
////{
////	queue<pair<int, int>> q;
////	q.push({ x, y });
////
////	visited_check[x][y] = 2;
////
////	while (!q.empty())
////	{
////		int current_x = q.front().first;
////		int current_y = q.front().second;
////		q.pop();
////
////		for (int i = 0; i < 8; i++)
////		{
////			int nx = dx[i] + current_x;
////			int ny = dy[i] + current_y;
////
////			if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited_check[nx][ny] == 2 || map[nx][ny] == 0) continue;
////			
////			q.push({ nx, ny });
////			visited_check[nx][ny] = 2;
////			//map[nx][ny] = 9;
////		}
////	}
////
////}
////
////int main()
////{
////	while (true)
////	{
////		int count = 0;
////		int map[50][50] = { 0 };
////		int visited_check[50][50] = { 0 };
////		cin >> n >> m;
////		if (n == 0 && m == 0) break;
////
////		for (int i = 0; i < m; i++)
////		{
////			for (int j = 0; j < n; j++)
////			{
////				cin >> map[i][j];
////			}
////		}
////
////		for (int i = 0; i < m; i++)
////		{
////			for (int j = 0; j < n; j++)
////			{
////				if (map[j][i] == 1 && visited_check[j][i] != 2)
////				{
////					bfs(j, i, visited_check, map);
////					count++;
////				}
////			}
////		}
////		cout << count << endl;
////	}
////
////	return 0;
////}
////
////#include <iostream>
////#include <vector>
////#include <queue>
////#include <algorithm>
////using namespace std;
////
////int n, count;
////int map[26][26];
////int visited[26][26];
////int dr[] = { -1, 1, 0, 0 };
////int dc[] = { 0, 0, -1, 1 };
////
////
////void print_ary() {
////	cout << "==========================" << endl;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++) {
////			cout << map[i][j] << " ";
////		}
////		cout << endl;
////	}
////}
////
////int bfs(int row, int col, int number)
////{
////	queue<pair<int, int>> q;
////	q.push({ row, col });
////	visited[row][col] = true;
////
////	int count = 1;
////	while (!q.empty())
////	{
////		int current_row = q.front().first;
////		int current_col = q.front().second;
////		q.pop();
////		visited[row][col] = true;
////		map[row][col] = number;
////
////		for (int i = 0; i < 4; i++)
////		{
////			int next_row = current_row + dr[i];
////			int next_col = current_col + dc[i];
////
////			if (next_row<0 || next_row>n-1 || next_col<0 || next_row>n-1 || map[next_row][next_col] == 0 || visited[next_row][next_col]) continue;
////
////			q.push({ next_row, next_col });
////			visited[next_row][next_col] = true;
////			map[next_row][next_col] = number;
////
////			count++;
////
////			// map[26][26] = {count};
////			// cout << map << endl;
////		}
////	}
////	return count;
////}
////
////int main()
////{
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		string numbers;
////		cin >> numbers;
////		for (int j = 0; j < n; j++)
////		{
////			map[i][j] = numbers[j] - '0';
////		}
////	}
////	
////	vector<int> results;
////	int number = 1;
////	for (int i = 0; i < n; i++)
////	{
////		for (int j = 0; j < n; j++)
////		{
////			if (map[i][j] == 1 && !visited[i][j])
////			{
////				int result = bfs(i, j, number);
////				results.push_back(result);
////				number++;
////			}
////		}
////	}
////
////	cout << results.size() << endl;
////
////	sort(results.begin(), results.end());
////	for (int i = 0; i < results.size(); i++)
////	{
////		cout << results[i] << endl;
////	}
////
////	print_ary();
////
////	return 0;
////}
//
////#include <iostream>
////#include <vector>
////#include <queue>
////using namespace std;
////
////int original_map[500][500];
////int n, m;
////int dx[] = { 0, 0, 1, -1 };
////int dy[] = { 1, -1, 0, 0 };
////
////void bfs(int x, int y)
////{
////	int visited[500][500];
////	queue<pair<int, int>> q;
////	visited[x][y] = { false };
////	q.push({ x, y });
////
////	while (!q.empty())
////	{
////		int current_x = q.front().first; // current_x current_y는 queue에 가장 위에 있는 좌표
////		int current_y = q.front().second;
////		q.pop();
////
////		for (int i = 0; i < 4; i++)
////		{
////			int nx = dx[i] + current_x;
////			int ny = dy[i] + current_y;
////
////			if (nx<0 || nx>n || ny<0 || ny>m) continue;
////			q.push({ nx, ny });
////			visited[nx][ny] = true;
////		}
////
////	}
////}
////int originalmap[500][500];
////int dx[] = { 0, 0, -1, 1 };
////int dy[] = { 1, -1, 0, 0 };
////
////void bfs(int x, int y)
////{
////	queue<pair<int, int>> q;
////	q.push({x, y});
////	int visited[500][500] = { true };
////	
////	while (!q.empty())
////	{
////		int current_x = q.front().first;
////		int current_y = q.front().second;
////
////		for (int i = 0; i < 4; i++)
////		{
////			int next_x = current_x + dx[i];
////			int next_y = current_y + dy[i];
////
////			if (next_x < 0 || next_x >= current_x || next_y < 0 || next_y >= current_x || visited) continue;
////
////			q.push({ next_x, next_y });
////			visited[next_x][next_y] = true;
////		}
////	}
////}
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int w, h;
//int original_map[51][51];
//int dw[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
//int dh[] = { 1, -1, 0, 0, -1, 1, -1, 1 };
//
//void bfs(int w, int h, int start_w, int start_h)
//{
//	queue<pair<int, int>> q;
//	bool visited[50][50] = { false };
//	q.push({ start_w, start_h });
//	visited[start_w][start_h] = true;
//
//	while (!q.empty())
//	{
//		int current_w = q.front().first;
//		int current_h = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 8; i++)
//		{
//			int next_w = current_w + dw[i];
//			int next_h = current_h + dh[i];
//
//			if (next_w < 0 || next_w >= w || next_h < 0 || next_h >= h) continue;
//
//			if (original_map[next_w][next_h] == 1 && visited[next_w][next_h] == true)
//			{
//				q.push({ next_w, next_h });
//				visited[next_w][next_h] = true;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	while (true)
//	{
//		cin >> w >> h;
//		if (w == 0 && h == 0) break;
//
//		for (int i = 0; i < w; i++)
//		{
//			for (int j = 0; j < h; j++)
//			{
//				cin >> original_map[i][j];
//			}
//		}
//		int island_count = 0;
//
//		for (int i = 0; i < w; i++)
//		{
//			for (int j = 0; j < h; j++)
//			{
//				if (original_map[i][j] == 1)
//				{
//					bfs(w, h, i, j);
//					island_count++;
//				}
//			}
//		}
//		cout << island_count << endl;
//	}
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int dx[] = { 0, 0, -1, 1, -1, -1, 1, 1 };
//int dy[] = { 1, -1, 0, 0, -1, 1, -1, 1 };
//
//void bfs(int w, int h, int start_w, int start_h, int original_map[][51], bool visited[][50])
//{
//    queue<pair<int, int>> q;
//    q.push({ start_w, start_h });
//    visited[start_w][start_h] = true;
//
//    while (!q.empty())
//    {
//        int current_w = q.front().first;
//        int current_h = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 8; i++)
//        {
//            int next_w = current_w + dw[i];
//            int next_h = current_h + dh[i];
//
//            if (next_w < 0 || next_w >= w || next_h < 0 || next_h >= h) continue;
//
//            if (original_map[next_w][next_h] == 1 && !visited[next_w][next_h])
//            {
//                q.push({ next_w, next_h });
//                visited[next_w][next_h] = true;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int w, h;
//    while (true)
//    {
//        cin >> w >> h;
//        if (w == 0 && h == 0) break;
//
//        int original_map[51][51];
//        bool visited[50][50] = { false };
//
//        for (int i = 0; i < w; i++)
//        {
//            for (int j = 0; j < h; j++)
//            {
//                cin >> original_map[i][j];
//            }
//        }
//        int island_count = 0;
//
//        for (int i = 0; i < w; i++)
//        {
//            for (int j = 0; j < h; j++)
//            {
//                if (original_map[i][j] == 1 && !visited[i][j])
//                {
//                    bfs(w, h, i, j, original_map, visited);
//                    island_count++;
//                }
//            }
//        }
//        cout << island_count << endl;
//    }
//    return 0;
//}
//
//void bsf2(int x, int y)
//{
//    queue<pair<int, int>> q;
//    bool visited[50][50] = { false };
//
//    q.push({ x, y });
//    visited[x][y] = { true };
//
//    while (!q.empty())
//    {
//        int current_x = q.front().first;
//        int current_y = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; i++)
//        {
//            int next_x = dx[i] + current_x;
//            int next_y = dy[i] + current_y;
//
//            if (next_x < 0 || next_x >= x || next_y < 0 || next_y >= y || visited) continue;
//            
//            q.push({ next_x, next_y });
//            visited[next_x][next_y] = true;
//        }
//
//    }
//
//}
//
//int main()
//{
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, m;
//int original_map[50][50];
//int row[] = { 0, 0, -1, 1 };
//int col[] = { 1, -1, 0, 0 };
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> original_map[i][j];
//
//			bfs(i, j);
//		}
//	}
//
//	return 0;
//}
//
//void bfs(int x, int y)
//{
//	queue<pair<int, int>> q;
//	bool visited[50][50] = {false};
//	
//	visited[x][y] = { true };
//	q.push({ x, y });
//
//	while (!q.empty())
//	{
//		int current_x = q.front().first;
//		int current_y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int next_x = current_x + row[i];
//			int next_y = current_y + col[i];
//
//			if (next_x < 0 || next_x >= n || next_y<0 || next_y >= m || visited[next_x][next_y]) continue;
//
//			q.push({ next_x, next_y });
//			visited[next_x][next_y] = { true };
//		}
//
//	}
//
//}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n, m;
int original_map[50][50];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	bool visited[50][50] = { false };
	q.push({ x, y });
	visited[x][y] = true;

	while (!q.empty())
	{
		int current_x = x + q.front().first;
		int current_y = y + q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = dx[i] + current_x;
			int ny = dy[i] + current_y;

			if (nx < 0 || nx >= n || ny<0 || ny>m || visited[nx][ny]) continue;
			q.push({ nx, ny });
			visited[nx][ny];
		}
	}

}

int main()
{
	return 0;
}