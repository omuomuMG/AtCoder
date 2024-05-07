#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<vector<bool>> dp(n + 2, vector<bool>(x + 1));
    vector<ll> a(n + 1), b(n + 1);
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    dp[0][0] = true;
    for (int i = 1; i < x + 1; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            if (dp[i - 1][j] == true && j + a[i] <= x)
            {
                dp[i][j + a[i]] = true;
            }
            if (dp[i - 1][j] == true && j + b[i] <= x)
            {
                dp[i][j + b[i]] = true;
            }
        }
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j < dp[i].size(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if (dp[n][x] == true)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}