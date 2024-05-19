#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll x;
    cin >> x;
    vector<ll> dp(x + 1, 0); // dp:0 none,dp:1 avairable,dp:-1 not ava
    dp[0] = 1;
    for (int i = 0; i < m; i++)
    {
        dp[b[i]] = -1;
    }

    for (int i = 0; i < x + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dp[i] == 1 && i + a[j] < x + 1 && dp[i + a[j]] != -1)
            {
                dp[i + a[j]] = 1;
            }
            if (dp[x] == 1)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}