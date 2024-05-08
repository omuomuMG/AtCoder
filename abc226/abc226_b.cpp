#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    map<vector<ll>, ll> mp;
    vector<ll> data;

    for (int i = 0; i < n; i++)
    {
        ll l;
        cin >> l;
        data.clear();
        for (int j = 0; j < l; j++)
        {
            ll a;
            cin >> a;
            data.push_back(a);
        }
        mp[data]++;
    }
    cout << mp.size();
}