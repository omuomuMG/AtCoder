#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

map<ll, bool> mp;
stack<ll> stk;
map<ll, vector<ll>> graph;
ll maxi = 0;

void dfs()
{
    if (stk.empty())
        return;
    ll current = stk.top();
    maxi = max(current, maxi);
    stk.pop();
    for (ll i = 0; i < (ll)graph[current].size(); i++)
    {
        if (mp[graph[current][i]] == false)
        {
            mp[graph[current][i]] = true;
            stk.push(graph[current][i]);
            dfs();
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back((ll)b);
        graph[b].push_back((ll)a);
    }
    stk.push(0);
    mp[0] = true;
    dfs();
    cout << maxi + 1;
}