#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    for (int i = a; i <= b * a; i += a)
    {
        if (i % b == c)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}