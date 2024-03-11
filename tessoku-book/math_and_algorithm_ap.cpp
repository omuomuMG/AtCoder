#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    int mod = 1000000007;
    cin >> n;
    vector<ll> a(n);
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = ((a[i - 1]) % mod + (a[i - 2]) % mod) % mod;
    }
    cout << a[n - 1];
}