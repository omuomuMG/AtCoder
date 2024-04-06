#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        d[i] %= (a + b);
    }

    sort(all(d));
    for (int i = 0; i < n; i++)
    {
        d.push_back(d[i] + a + b);
    }

    for (int i = 0; i < d.size() - 1; i++)
    {
        if ((d[i + 1] - d[i]) > b)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}