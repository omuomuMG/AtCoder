#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m, x;
    cin >> n >> m >> x;
    vector<ll> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll ans;
    int left = 0, right = 0;
    for (int i = 0; i < m; ++i)
    {
        if (a[i] < x)
            ++left;
        else
            ++right;
    }
    ans = min(right, left);
    cout << ans;
}