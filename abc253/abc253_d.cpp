#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll sum(ll r, ll n)
{

    // return 0.5 * n / r * (r + r * floor(n / r));
    ll m = n / r;
    return r * m * (m + 1) / 2;
}

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;

    ll count_a = sum(a, n);
    ll count_b = sum(b, n);
    ll count_ab = sum(lcm(b, a), n);
    ll all = sum(1, n);
    cout << all - count_a - count_b + count_ab << endl;
    // cout << all << " " << count_a << " " << count_b << " " << count_ab << endl;
}
