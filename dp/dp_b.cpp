#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> h(n);
    vector<ll> dp(n, INFINITY);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    dp[0] = 0;
    // dp[1] = h[0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i + j < n)
                dp[i + j] = min(dp[i] + abs(h[i] - h[j + i]), dp[i + j]);
        }
    }
    cout << dp[n - 1];
}