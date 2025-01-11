```
#include <bits/stdc++.h>
using namespace std;

constexpr int DX[] = {1, 0, -1, 0}; // 右, 下, 左, 上
constexpr int DY[] = {0, 1, 0, -1};

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    queue<pair<int, int>> que;
    int gen = 0;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                que.push({i, j});
            }
        }
    }
    while (!que.empty())
    {
        int q_size = que.size();

        for (int i = 0; i < q_size; i++)
        {
            int y = que.front().first;
            int x = que.front().second;
            que.pop();

            for (int d = 0; d < 4; d++)
            {
                int ny = y + DY[d];
                int nx = x + DX[d];

                if (ny >= 0 && ny < h && nx >= 0 && nx < w && a[ny][nx] == '.')
                {
                    a[ny][nx] = '#';
                    que.push({ny, nx});
                }
            }
        }
        gen++;
    }

    cout << gen - 1 << endl;
}

```
@bfs
4方向だから、間違えないように！
