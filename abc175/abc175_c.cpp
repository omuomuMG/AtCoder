#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll x, k, d;
    cin >> x >> k >> d;

    ll temp = x / d;
    if (x >= 0)
    {
        if (temp <= k)
        {
            k -= temp;
            x -= temp * d;
        }
        else
        {
            x -= k * d;
            k = 0;
        }
        if (k % 2 == 0 || k == 0)
        {
            cout << abs(x);
        }
        else
        {
            x -= d;
            cout << abs(x);
        }
    }
    else
    {
        temp = abs(temp);
        if (temp <= k)
        {
            k -= temp;
            x += temp * d;
        }
        else
        {
            x += k * d;
            k = 0;
        }
        if (k % 2 == 0 || k == 0)
        {
            cout << abs(x);
        }
        else
        {
            x += d;
            cout << abs(x);
        }
    }
}