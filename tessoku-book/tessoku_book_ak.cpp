#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m, b;
    cin >> n >> m >> b;
    ll sum = 0;
    ll a, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += (a + b) * m;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        sum += c * n;
    }
    cout << sum << endl;
}