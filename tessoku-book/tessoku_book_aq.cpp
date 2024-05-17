#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    // 全員が同じ速度で動いているた,同じ方向にきたら移動方向を帰ることは考慮しなくてもいい.
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);
    vector<char> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll last = 0;
    ll dist;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 'W')
        {
            dist = a[i];
        }
        else
        {
            dist = l - a[i];
        }
        last = max(last, dist);
    }
    cout << last << endl;
}