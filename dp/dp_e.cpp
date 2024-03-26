#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll max_v = 100100;
    int n;
    ll W;
    cin >> n >> W;
    // 縦品物iについて横が価値の総和,要素が重さ
    vector<vector<ll>> dp(n + 1, vector<ll>(max_v, W + 100));
    vector<ll> w(n + 1), v(n + 1);
    w[0] = 0;
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < max_v; j++)
        {
            // 選んだ場合
            if (j - v[i] >= 0)
                dp[i][j] = min(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
            // 選ばなかった場合
            dp[i][j] = min(dp[i - 1][j], dp[i][j]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < max_v; i++)
    {
        if (dp[n][i] <= W)
        {
            ans = i;
        }
    }
    cout << ans;
}