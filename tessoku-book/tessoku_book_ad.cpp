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
    ll n, r;
    cin >> n >> r;
    ll a = 1;
    ll b = 1;
    ll mod = 1000000007;
    for (int i = 1; i <= n; i++)
    {
        a = (a * i) % mod;
    }
    for (int i = 1; i <= r; i++)
    {
        b = (b * i) % mod;
    }
    for (int i = 1; i <= n - r; i++)
    {
        b = (b * i) % mod;
    }

    cout << (a * power(b, mod - 2, mod)) % mod;
}