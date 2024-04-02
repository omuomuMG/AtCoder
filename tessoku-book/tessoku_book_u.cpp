#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> p(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i] >> a[i];
    }
    // dp[l][r]は一番左のブロックがl,一番右がrの時の状態を示す
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -100));
    dp[1][n] = 0;
    for (int len = n - 2; len >= 0; len--)
    {
        for (int l = 1; l <= n - len; l++)
        {
            int r = len + l;

            int score1 = 0;
            if (l <= p[l - 1] && p[l - 1] <= r)
            {
                score1 = a[l - 1];
            }
            int score2 = 0;
            if (l <= p[r + 1] && p[r + 1] <= r)
            {
                score2 = a[r + 1];
            }
            if (l == 1)
            {
                dp[l][r] = dp[l][r + 1] + score2;
            }
            else if (r == n)
            {
                dp[l][r] = dp[l - 1][r] + score1;
            }
            else
            {
                dp[l][r] = max(dp[l][r + 1] + score2, dp[l - 1][r] + score1);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, dp[i][i]);
    }
    cout << ans;
}