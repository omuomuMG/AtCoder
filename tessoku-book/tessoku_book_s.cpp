#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

/*
 方針
 品物iを選んだ時の重さにおける価値の最大値を調べていく。
 一通り調べた後に、価値の最大を選ぶ。
 dpの縦は品物i（選んでも選ばなくても良い）
 dpの横軸は(iにおける重さ)
 */
int main()
{
    int n, W;
    cin >> n >> W;
    vector<ll> w(n + 1), v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(W + 1, -100));

    // 品物0までを選んだ時ときの重さ、価値の初期設定
    dp[0][0] = 0;

    // 品物i
    for (int i = 1; i <= n; i++)
    {
        // における重さ
        for (int j = 0; j <= W; j++)
        {
            // 選ばない
            if (j < w[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else // 撰ぶ
            {
                // 価値が最大になる方を撰ぶ
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i <= W; i++)
    {
        ans = max(ans, dp[n][i]);
    }
    cout << ans;
}