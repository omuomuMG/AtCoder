#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int len_s = s.size();
    int len_t = t.size();
    vector<vector<ll>> dp(len_s + 1, vector<ll>(len_t + 1, 0)); // 保持する値は共通部分の数

    dp[0][0] = 0;
    for (int i = 0; i <= len_s; i++)
    {
        for (int j = 0; j <= len_t; j++)
        {
            if (s[i - 1] == t[j - 1] && i >= 1 && j >= 1)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            else if (i >= 1 && j >= 1)
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            else if (i >= 1)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else if (j >= 1)
            {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }

    cout << dp[len_s][len_t];
}