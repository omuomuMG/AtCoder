#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll temp = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ans += temp;
        if (ans < 0)
        {
            ans = 0;
        }
    }
    cout << ans;
}