#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    // BFSをしたい！！
    int h, w;
    int ans = 0;
    cin >> h >> w;
    vector<string> s(h);
    vector<vector<bool>> is_searhed(h, vector<bool>(w, false));
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    queue<pair<int, int>> que;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#' && is_searhed[i][j] == false)
            {

                ans++;
                que.push(pair(i, j));
                while (!que.empty())
                {
                    int y = que.front().first;
                    int x = que.front().second;
                    que.pop();
                    for (int k = -1; k < 2; k++)
                    {
                        for (int l = -1; l < 2; l++)
                        {
                            if (y + k < 0 || y + k >= h || x + l < 0 || x + l >= w || (k == 0 && l == 0))
                                continue;
                            if (s[y + k][x + l] == '#' && is_searhed[y + k][x + l] == false)
                            {
                                is_searhed[y + k][x + l] = true;
                                que.push(pair(y + k, x + l));
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}