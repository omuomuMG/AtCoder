#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

vector<vector<int>> graph;
vector<bool> is_searched;

void dfs(int index)
{
    for (int i = 0; i < (int)graph[index].size(); i++)
    {
        if (is_searched[graph[index][i]] == false)
        {
            is_searched[graph[index][i]] = true;
            dfs(graph[index][i]);
        }
    }
}

int main()
{
    ll n, m;
    cin >> n >> m;
    graph.resize(n);
    is_searched.resize(n, false);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    is_searched[0] = true;
    dfs(0);
    string ans = "The graph is connected.";
    for (int i = 0; i < n; i++)
    {
        if (is_searched[i] == false)
        {
            ans = "The graph is not connected.";
        }
    }
    cout << ans;
}