#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> data(n);
    for (int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        data[a].push_back(b);
        data[b].push_back(a);
    }
    ll maxi = 0;
    ll person = 0;
    for (int i = 0; i < n; i++)
    {
        if (data[i].size() >= maxi)
        {
            person = i + 1;
            maxi = data[i].size();
        }
    }
    cout << person;
}