#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> s(n), dp(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> dp[i];

    dp[0] = min(dp[n - 1] + s[n - 1], dp[0]);
    for (int i = 0; i < n - 1; i++)
    {
        dp[i + 1] = min(dp[i + 1], dp[i] + s[i]);
    }
    dp[0] = min(dp[n - 1] + s[n - 1], dp[0]);
    dp[0] = min(dp[n - 1] + s[n - 1], dp[0]);
    for (int i = 0; i < n - 1; i++)
    {
        dp[i + 1] = min(dp[i + 1], dp[i] + s[i]);
    }
    dp[0] = min(dp[n - 1] + s[n - 1], dp[0]);

    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << endl;
    }
}