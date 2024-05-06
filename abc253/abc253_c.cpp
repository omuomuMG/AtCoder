#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll q;
    cin >> q;
    unordered_map<ll, ll> query;
    set<ll> values;
    int command;
    ll x, c;
    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            cin >> x;
            query[x]++;
            values.insert(x);
        }
        else if (command == 2)
        {
            cin >> x >> c;
            ll minus = min(query[x], c);
            query[x] -= minus;
            if (query[x] <= 0)
            {
                values.erase(x);
                query.erase(x);
            }
        }
        else if (command == 3)
        {
            cout << *values.rbegin() - *values.begin() << endl;
        }
    }
}