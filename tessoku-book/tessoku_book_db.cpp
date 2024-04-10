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
    ll a, b;
    cin >> a >> b;
    ll ans = power(a, b, 1000000007);
    cout << ans << endl;
}