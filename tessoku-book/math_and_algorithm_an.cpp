#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    ll a, b;
    queue<int> q;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> dist(n, -1);
    q.push(0);
    dist[0] = 0;
    while (q.size() != 0)
    {
        int pos = q.front();
        q.pop();
        for (int i = 0; i < g[pos].size(); i++)
        {
            int to = g[pos][i]; // 連結成分
            if (dist[to] == -1) // 未確定頂点なら
            {
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << endl;
    }
}