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
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 2; i < n; i++)
    {
        cin >> b[i];
    }
    a[0] = 0;
    b[0] = 0;
    b[1] = 0;
    vector<int> dp(n);

    dp[0] = 0;
    dp[1] = a[1];
    vector<int> ans;
    for (int i = 2; i < n; i++)
    {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + b[i]);
    }

    // ans.push_back(n);
    int i = n - 1;
    while (1)
    {
        ans.push_back(i + 1);
        if (a[i] + dp[i - 1] == dp[i])
        {
            i -= 1;
        }
        else
        {
            i -= 2;
        }
        if (i == 0)
        {
            ans.push_back(1);
            break;
        }
    }

    reverse(all(ans));
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}