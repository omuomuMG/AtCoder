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
    map<ll, bool> mp;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (a[i] <= k && mp[a[i]] == false)
        {
            sum -= a[i];
            mp[a[i]] = true;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        sum += i;
    }
    cout << sum;
}