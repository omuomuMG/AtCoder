#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll s, t;
    cin >> s >> t;
    ll bigger_num = max(s, t);

    ll ans = 0;
    for (int i = 0; i <= bigger_num; i++)
    {
        for (int j = 0; j <= bigger_num; j++)
        {
            for (int k = 0; k <= bigger_num; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                    ans++;
                else
                {
                    break;
                }
            }
        }
    }
    cout << ans;
}