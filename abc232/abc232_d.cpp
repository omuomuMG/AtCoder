#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int h, w;
vector<vector<char>> c;
vector<vector<bool>> visited;
stack<pair<pair<int, int>, int>> stk;

int ans = 0;
void dfs()
{
    while (!stk.empty())
    {
        int y = stk.top().first.first;
        int x = stk.top().first.second;
        visited[y][x] = true;
        int current = stk.top().second;
        stk.pop();

        if (y + 1 < h && c[y + 1][x] == '.' && visited[y + 1][x] == false)
        {
            stk.push(pair(pair(y + 1, x), current + 1));
            ans = max(current + 1, ans);
        }
        if (x + 1 < h && c[y][x + 1] == '.' && visited[y][x + 1] == false)
        {
            stk.push(pair(pair(y, x + 1), current + 1));
            ans = max(current + 1, ans);
        }
    }
}

int main()
{
    cin >> h >> w;
    c.resize(h);
    visited.resize(h);
    for (int i = 0; i < h; i++)
    {
        c[i].resize(w);
        visited[i].resize(w, false);
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> c[i][j];
        }
    }
    stk.push(pair(pair(0, 0), 0));
    visited[0][0] = true;
    dfs();
    cout << ans + 1 << endl;
}