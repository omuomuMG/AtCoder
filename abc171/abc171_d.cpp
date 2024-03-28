#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        sum += a[i];
    }
    cin >> q;
    ll b, c;
    for (int i = 0; i < q; i++)
    {
        cin >> b >> c;
        sum -= b * mp[b];
        sum += mp[b] * c;
        mp[c] += mp[b];
        mp[b] = 0;
        cout << sum << endl;
    }
}