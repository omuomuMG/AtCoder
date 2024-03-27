#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int s_len = s.length();
    int t_len = t.length();

    vector<vector<int>> dp(s_len + 1, vector<int>(t_len + 1, 0));
    dp[0][0] = 0;
    for (int i = 0; i <= s_len; i++)
    {
        for (int j = 0; j <= t_len; j++)
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
    string res = "";
    int i = s_len;
    int j = t_len;
    while (i > 0 && j > 0)
    {
        if (dp[i][j] == dp[i - 1][j])
        {
            i--;
        }
        else if (dp[i][j] == dp[i][j - 1])
        {
            j--;
        }
        else
        {
            res = s[i - 1] + res;
            i--;
            j--;
        }
    }
    cout << res << endl;
}