#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<vector<ll>> dp(n + 1);
    dp[0].push_back(1);
    ll l, input;
    vector<vector<ll>> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> l;
        a[i].push_back(0);
        for (int j = 0; j < l; j++)
        {
            cin >> input;
            a[i].push_back(input);
        }
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < (ll)dp[i - 1].size(); j++)
        {
            for (int k = 1; k < (ll)a[i].size(); k++)
            {
                if (dp[i - 1][j] * a[i][k] >= 0 && dp[i - 1][j] * a[i][k] <= x)
                    dp[i].push_back(dp[i - 1][j] * a[i][k]);
            }
        }
    }
    // for (int i = 0; i < n + 1; i++)
    // {
    //     for (int j = 0; j < dp[i].size(); j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll ans = 0;
    for (int i = 0; i < dp[n].size(); i++)
    {
        if (dp[n][i] == x)
        {
            ans++;
        }
    }
    cout << ans;
}