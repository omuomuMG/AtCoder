#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum <= m)
    {
        cout << "infinite";
        return 0;
    }

    ll left = 0;
    ll right = m;
    ll mid = (left + right) / 2;
    ll ans = 0;

    while (right >= left)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += min(mid, a[i]);
        }

        if (sum == m)
        {
            cout << mid;
            return 0;
        }
        else if (sum < m)
        {
            ans = max(ans, mid);
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else if (sum > m)
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
    }
    cout << ans;
}