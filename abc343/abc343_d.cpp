#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, t, a, b;
    cin >> n >> t;
    map<ll, ll> mp;
    vector<ll> data(n, 0);
    mp[0] = n;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        a--;
        mp[data[a]]--;
        if (mp[data[a]] == 0)
        {
            mp.erase(data[a]);
        }
        data[a] += b;
        mp[data[a]]++;
        cout << mp.size() << endl;
    }
}