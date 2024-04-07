#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
        if (mp[c[i]] == 0)
        {
            mp[c[i]] = a[i];
        }
        else
        {
            mp[c[i]] = min(mp[c[i]], a[i]);
        }
    }
    ll mini = mp[c[0]];
    for (auto [key, value] : mp)
    {
        mini = max(mini, value);
    }
    cout << mini;
}