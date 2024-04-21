#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;
    vector<ll> data;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        mp[a] = i;
        data.push_back(a);
    }

    vector<pair<ll, ll>> ans;
    for (int i = 0; i < n; i++)
    {
        if (data[i] != i + 1)
        {
            // cout << i + 1 << " " << mp[i + 1] + 1 << endl;
            ans.push_back(pair(i + 1, mp[i + 1] + 1));
            mp[data[i]] = mp[i + 1];
            mp[i + 1] = mp[data[i]];
            swap(data[i], data[mp[i + 1]]);

            // for (int j = 0; j < n; j++)
            // {
            //     cout << data[j] << " ";
            // }
            // cout << endl;
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}