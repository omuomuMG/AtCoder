#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> G[n];                                                   // iが自身の辺,pair<繋がっている辺, 辺のコスト>
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> Q; // pair<辺までの距離, どの辺に対しまでの距離なのか>
    vector<bool> isDecided(n, false);
    vector<ll> dist(n, LLONG_MAX);
    dist[0] = 0;
    ll a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        a--, b--;
        G[a].push_back(make_pair(b, c));
        G[b].push_back(make_pair(a, c));
    }
    Q.push(pair(0, 0));

    while (!Q.empty())
    {
        int pos = Q.top().second; // 調べる要素
        Q.pop();
        if (isDecided[pos] == true)
            continue;

        isDecided[pos] = true;
        for (int i = 0; i < G[pos].size(); i++)
        {
            int next = G[pos][i].first; // 調べる要素の次の場所について調べる
            int cost = G[pos][i].second;
            if (dist[next] > dist[pos] + cost)
            {
                dist[next] = dist[pos] + cost;
                Q.push(pair(dist[next], next));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (dist[i] == LLONG_MAX)
            cout << "-1" << endl;
        else
            cout << dist[i] << endl;
    }
}