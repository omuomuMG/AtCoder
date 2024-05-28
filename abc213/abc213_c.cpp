#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

// x,y についてそれぞれ座標圧縮する

int main()
{
    ll h, w, n;
    cin >> h >> w >> n;
    vector<ll> a(n), b(n);
    vector<ll> x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        x.push_back(a[i]);
        y.push_back(b[i]);
    }
    sort(x.begin(), x.end());
    x.erase(unique(x.begin(), x.end()), x.end());

    sort(y.begin(), y.end());
    y.erase(unique(y.begin(), y.end()), y.end());

    for (int i = 0; i < n; i++)
    {
        cout << lower_bound(all(x), a[i]) - x.begin() + 1 << " " << lower_bound(all(y), b[i]) - y.begin() + 1 << endl;
    }
}