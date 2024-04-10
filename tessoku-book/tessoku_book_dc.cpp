#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll power(ll a, ll b, ll mod)
{
    ll p = a;
    ll ans = 1;
    for (int i = 0; i < 60; i++)
    {
        ll wari = ((ll)1 << i);
        if ((b / wari) % 2 == 1)
        {
            ans = (ans * p) % mod;
        }
        p = (p * p) % mod;
    }
    return ans;
}

int main()
{
    ll h = 1;
    ll w = 1;
    ll a = 1;
    ll b = 1;
    cin >> h >> w;
    h--;
    w--;
    ll mod = 1000000007;
    for (int i = 1; i <= h + w; i++)
    {
        a = (a * i) % mod;
    }
    for (int i = 1; i <= w; i++)
    {
        b = (b * i) % mod;
    }
    for (int i = 1; i <= h; i++)
    {
        b = (b * i) % mod;
    }

    cout << (a * power(b, mod - 2, mod)) % mod;
}