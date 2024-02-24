#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<bool>> dp(n + 1, vector<bool>(s + 1));

    // i = 0の時
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    // i=1のとき
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            // 合計がa[i]よりも大きいときは選ばない
            if (j < a[i])
            {
                if (dp[i - 1][j] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            if (j >= a[i])
            { // 選ぶかえらばない
                if (dp[i - 1][j] == true || dp[i - 1][j - a[i]] == true)
                {
                    // dp[i - 1][j - a[i]] == trueのときは,新たなカードを選んでいる
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
    }
    if (dp[n][s] == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
