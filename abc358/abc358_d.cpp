#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(all(a));
    sort(all(b));

    ll i = 0;
    ll j = 0;
    ll sum = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
            if (i == n)
            {
                cout << -1;
                return 0;
            }
        }
        else
        {
            sum += a[i];
            i++;
            j++;
        }
    }

    if (m == j)
        cout << sum;
    else
        cout << -1;
}