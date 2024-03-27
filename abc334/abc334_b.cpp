#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll floor(ll x, ll m)
{
    ll r = (x % m + m) % m;
    return (x - r) / m;
}

int main()
{
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    ll ans = 0;

    // 東方向だけを考える
    r -= a;

    // 西
    l -= a;
    cout
        << floor(r, m) - floor(l - 1, m);
}