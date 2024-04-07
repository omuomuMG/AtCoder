#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int r, c;
	int sy, sx, gy, gx;
	cin >> r >> c >> sy >> sx >> gy >> gx;

	vector<string> s(r);
	for (int i = 0; i < r; i++)
	{
		cin >> s[i];
	}
	queue<pair<int, int>> q;
	sy--, sx--, gy--, gx--;
	vector<vector<int>> dist(r, vector<int>(c, -1));
	dist[sy][sx] = 0;
	q.push(pair(sy, sx));

	while (q.size() > 0)
	{
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = -1; i < 2; i++)
		{
			for (int j = -1; j < 2; j++)
			{
				if ((i == -1 && j == -1) || (i == -1 && j == 1) || (i == 1 && j == -1) || (j == 1 && i == 1) || (i == 0 && j == 0))
					continue;
				if (s[y + j][x + i] == '.' && dist[y + j][x + i] == -1)
				{
					dist[y + j][x + i] = dist[y][x] + 1;
					if (x + i == gx && y + j == gy)
					{
						cout << dist[gy][gx] << endl;
						return 0;
					}
					q.push(pair(y + j, x + i));
				}
			}
		}
	}
}