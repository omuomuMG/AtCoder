#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll x;
    cin >> x;
    if (x > 0)
    {
        cout << (x + 10 - 1) / 10;
    }
    else if (x <= 0)
    {
        x /= 10;
        cout << x;
    }
}