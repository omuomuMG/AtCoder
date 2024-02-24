#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n), s(n - 1), t(n - 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> s[i] >> t[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] <= a[i])
        {
            ll temp = a[i] / s[i];
            a[i] -= (temp * s[i]);
            a[i + 1] += (temp * t[i]);
        }
    }
    cout << a[n - 1];
}