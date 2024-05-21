#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    string rev_s;
    ll ans = LLONG_MAX;
    ll a_value = 0;
    ll b_value = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i != 0)
        {
            a_value += a;
            s += s[0];
            s.erase(s.begin());
        }

        b_value = 0;
        // cout << s << " " << endl;
        for (int j = 0; j < (int)s.size() / 2; j++)
        {
            if (s[j] != s[s.size() - j - 1])
            {
                // cout << s[j] << " " << s[s.size() - j - 1] << endl;
                b_value += b;
            }
        }
        ans = min(ans, a_value + b_value);
        // cout << a_value << " " << b_value << " " << s.size() << endl;
    }
    cout << ans << endl;
}