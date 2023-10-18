
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, m, count;
int map[50][50];
vector<vector<int>> visited;
int dx[] = { 0, 0, -1, 1, -1, 1, -1, 1 };
int dy[] = { 1, -1, 0, 0, -1, -1, 1, 1 };
int visited_check[50][50];
int x, y;

void bfs()
{
	queue<pair<int, int>> q;
	q.push({ x, y });

	visited_check[x][y] = 2;

	while (!q.empty())
	{
		int current_x = q.front().first;
		int current_y = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++)
		{
			int nx = dx[i] + current_x;
			int ny = dy[i] + current_y;

			if (nx > 0 || nx <= x || ny > 0 || ny <= x || visited_check[nx][ny] == 2 || map[nx][ny] == 0) continue;
			q.push({ nx, ny });

			visited_check[nx][ny] = 2;
			//map[nx][ny] = 9;
		}
	}

}

int main()
{
	int count;
	while (true)
	{
		count = 0;
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> map[i][j];
			}
		}
		visited_check[50][50] = {0};
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (map[i][j] == 1 && visited_check[i][j] != 2)
				{
					bfs();
					count++;
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}