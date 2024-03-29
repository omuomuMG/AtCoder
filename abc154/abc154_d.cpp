#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    vector<ll> temp = p;
    sort(all(temp));

    map<ll, ll> mp;

    mp[1] = 1;

    for (int i = 2; i <= temp[n - 1]; i++)
    {
        mp[i] = mp[i - 1] + i;
    }
    double sum = 0;
    double ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += (double)mp[p[i]] / p[i];
        ans = max(ans, sum);
    }

    for (int i = k; i < n; i++)
    {
        sum -= (double)mp[p[i - k]] / p[i - k];
        sum += (double)mp[p[i]] / p[i];
        ans = max(ans, sum);
    }

    cout << fixed << setprecision(15) << ans;
}
