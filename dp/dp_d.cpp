#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    ll W;
    cin >> n >> W;
    vector<ll> w(n + 1), v(n + 1);
    w[0] = 0;
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];

        cin >> v[i];
    }

    // 横は重さの合計,縦は品物i
    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, -100));

    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            // 何も選ばないとき
            dp[i][j] = max(dp[i - 1][j], dp[i][j]);

            // 品物iを選ぶ時
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
            // dp[i][j]は品物iを選ぶ。jは重さを管理するので,j-w[i]前の状態の重さを表す
        }
    }
    ll ans = -100;
    for (int j = 0; j <= W; j++)
    {
        ans = max(ans, dp[n][j]);
    }

    cout << ans;
}