#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll cul = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cul += a[i];
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        cul -= a[i];
        ans += cul * a[i];
    }
    cout << ans << endl;
}