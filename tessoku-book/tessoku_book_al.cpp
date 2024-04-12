#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll d, n;
    cin >> d >> n;
    vector<ll> time(d, 24);
    ll l, r, h;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r >> h;
        l--;
        r--;
        for (int j = l; j <= r; j++)
        {
            time[j] = min(time[j], h);
        }
    }
    ll sum = 0;
    for (int i = 0; i < d; i++)
    {
        sum += time[i];
    }
    cout << sum << endl;
}