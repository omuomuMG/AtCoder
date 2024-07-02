#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    // 余剰な荷物を集める
    ll n;
    cin >> n;
    vector<ll> a(n), w(n);
    vector<bool> packet(n, false);
    unordered_map<ll, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(w[i]);
    }
    ll ans = 0;
    for (auto [key, value] : mp)
    {
        if (mp[key].size() > 1)
        {
            sort(all(mp[key]));
            for (int i = 0; i < mp[key].size() - 1; i++)
            {
                ans += mp[key][i];
            }
        }
    }
    cout << ans;
}