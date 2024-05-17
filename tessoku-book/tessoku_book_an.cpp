#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int Combination(ll value)
{
    ll sum = 0;
    if (value < 3)
    {
        return 0;
    }
    else
        sum += (value) * (value - 1) * (value - 2);

    return sum / 6;
}

int main()
{
    ll n;
    cin >> n;
    ll a;
    ll ans = 0;
    unordered_map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    for (auto [key, value] : mp)
    {
        ans += Combination(value);
    }
    cout << ans << endl;
}