#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll a, b, n;
    cin >> n >> a >> b;
    vector<ll> dp(n + 1);
    for (int i = 0; i <= n; i++)
    {
        if (i >= a && dp[i - a] == false) // 負けの状態となるような遷移が存在する
        {
            dp[i] = true;
        }
        else if (i >= b && dp[i - b] == false)
        {
            dp[i] = true;
        }
        else
        {
            dp[i] = false;
        }
    }
    if (dp[n] == true)
    {
        cout << "First";
    }
    else
    {
        cout << "Second";
    }
}