#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    ll temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        p[i] = pair(temp, i + 1);
    }
    sort(all(p));
    set<ll> current;
    ll ans = LLONG_MAX;
    if (k == 1)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < k - 1; i++)
    {
        current.insert(p[i].second);
    }
    for (int i = k - 1; i < n; i++)
    {
        current.insert(p[i].second);
        ll temp = *current.rbegin() - *current.begin();
        ans = min(ans, temp);
        current.erase(p[i - k + 1].second);
    }

    cout << ans << endl;
}