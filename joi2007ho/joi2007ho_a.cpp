#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    ll maxi = 0;
    ll current;
    for (int i = k - 1; i < n; i++)
    {
        current = a[i] - a[i - k];
        maxi = max(maxi, current);
    }
    cout << maxi << endl;
}