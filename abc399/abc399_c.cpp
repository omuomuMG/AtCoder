#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1);
    }
    vector<int> visited(n, 0);
    int ans = 0;

    for (int start = 0; start < n; start++)
    {
        if (visited[start])
            continue;
        stack<pair<int, int>> stk;
        stk.push({start, -1});
        while (!stk.empty())
        {
            auto [current, parent] = stk.top();
            stk.pop();
            if (visited[current])
                continue;
            visited[current] = 1;
            for (int next : G[current])
            {
                if (next == parent)
                    continue;
                if (visited[next])
                {
                    ans++;
                }
                else
                {
                    stk.push({next, current});
                }
            }
        }
    }
    cout << ans << endl;
}