#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll mod = 1000000000 + 7;
    int h, w;
    cin >> h >> w;
    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> dp(h, vector<ll>(w, 0));
    dp[0][0] = 1;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (j < w - 1 && a[i][j + 1] == '.')
                dp[i][j + 1] = (dp[i][j + 1] % mod + dp[i][j] % mod) % mod;
            if (i < h - 1 && a[i + 1][j] == '.')
                dp[i + 1][j] = (dp[i + 1][j] % mod + dp[i][j] % mod) % mod;
        }
    }
    cout << dp[h - 1][w - 1];
}