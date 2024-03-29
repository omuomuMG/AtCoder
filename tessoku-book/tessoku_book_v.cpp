#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> dp(n + 1, -10000);

    dp[0] = -10000;
    dp[1] = 0;

    for (int i = 1; i < n; i++)
    {
        dp[a[i]] = max(dp[i] + 100, dp[a[i]]);
        dp[b[i]] = max(dp[i] + 150, dp[b[i]]);
    }

    cout << dp[n];
}