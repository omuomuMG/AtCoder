#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    ll ans = LLONG_MAX;
    for (int i = 0; i <= max(x, y) * 2; i++)
    {
        ll a_price = 0;
        if ((x - i / 2) * a > 0)
        {
            a_price += (x - i / 2) * a;
        }
        ll b_price = 0;
        if ((y - i / 2) * b > 0)
        {
            b_price += (y - i / 2) * b;
        }
        ans = min(ans, a_price + b_price + i * c);
    }
    cout << ans;
}