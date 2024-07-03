#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> Q; // cost,num
    vector<bool> visited(n, false);
    vector<ll> a(m), b(m), c(m);
    vector<vector<pair<ll, ll>>> graph(n);
    vector<ll> res(n, LLONG_MAX);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--, b[i]--;
        graph[a[i]].push_back(pair(b[i], c[i]));
        graph[b[i]].push_back(pair(a[i], c[i]));
    }

    Q.push(pair(0, 0)); // 最初の頂点までのコストは0
    res[0] = 0;

    while (!Q.empty())
    {
        int pos = Q.top().second;
        Q.pop();

        if (visited[pos] == true)
            continue;

        visited[pos] = true;
        for (int i = 0; i < graph[pos].size(); i++)
        {
            int next_node = graph[pos][i].first;
            int next_cost = graph[pos][i].second;

            if (res[next_node] > next_cost + res[pos])
            {
                res[next_node] = next_cost + res[pos];
                Q.push(pair(res[next_node], next_node));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (res[i] != LLONG_MAX)
            cout << res[i] << endl;
        else
            cout << -1 << endl;
    }
}