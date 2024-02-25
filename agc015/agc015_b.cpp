#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;

    ll len = s.size();
    ll ans = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'U')
        {
            ans += len - i - 1;
            ans += i * 2;
        }
        else
        {
            ans += i;
            ans += (len - i - 1) * 2;
        }

        // cout << ans << endl;
    }
    cout << ans << endl;
}