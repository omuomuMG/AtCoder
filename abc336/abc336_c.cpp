#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    // 5進法で考える
    string convert5 = "";
    if (n == 1)
    {
        cout << 0;
        return 0;
    }
    n--;
    while (n >= 1)
    {
        convert5 += to_string(n % 5);
        n /= 5;
    }

    string ans = convert5;
    reverse(all(ans));
    // 5進法のansができる.
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == '1')
        {
            ans[i] = '2';
        }
        else if (ans[i] == '2')
        {
            ans[i] = '4';
        }
        else if (ans[i] == '3')
        {
            ans[i] = '6';
        }
        else if (ans[i] == '4')
        {
            ans[i] = '8';
        }
    }
    cout << ans;
}