#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{

    ll n;
    cin >> n;
    vector<vector<ll>> input(n, vector<ll>(3));
    vector<vector<ll>> dp(n + 1, vector<ll>(3, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> input[i][0] >> input[i][1] >> input[i][2];
    }

    // dp[i+1]に遷移したいならdp[i]のみ考えればよい
    // dp[i+1][0,1,2]に遷移するための候補はdp[0,1,2]から考えれば良いだけ
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++) // 遷移前
        {
            for (int k = 0; k < 3; k++) // 遷移先
            {
                if (j == k)
                    continue;
                dp[i + 1][k] = max(dp[i][j] + input[i][k], dp[i + 1][k]);
            }
        }
    }
    ll mini = max(dp[n][0], dp[n][1]);
    mini = max(mini, dp[n][2]);
    cout << mini;
}