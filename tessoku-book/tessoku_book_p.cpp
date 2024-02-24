#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    a[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    b[0] = 0;
    b[1] = 0;
    for (int i = 2; i < n; i++)
    {
        cin >> b[i];
    }

    vector<int> dp(n, 0);
    dp[0] = 0;
    dp[1] = a[1];

    for (int i = 2; i < n; i++)
    {
        dp[i] += min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }
    ll sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dp[i] << endl;
    //     sum += dp[i];
    // }
    cout << dp[n - 1];
}