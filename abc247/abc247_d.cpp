#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll q;
    cin >> q;
    deque<pair<ll, ll>> a;

    ll sum = 0;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            ll x, c;
            cin >> x >> c;
            a.push_back(pair(x, c));
        }
        else
        {
            ll c;
            ll sum = 0;
            cin >> c;
            while (1)
            {
                if (a[0].second < c)
                {
                    sum += a[0].first * a[0].second;
                    c -= a[0].second;
                    a.pop_front();
                }
                else
                {
                    sum += a[0].first * c;
                    a[0].second -= c;
                    cout << sum << endl;
                    break;
                }
            }
        }
    }
}