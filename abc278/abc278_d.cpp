#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        mp[i + 1] = tmp;
    }
    ll q;
    cin >> q;
    ll command, a, x;
    ll base = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            cin >> x;
            mp.clear();
            base = x;
        }
        else if (command == 2)
        {
            cin >> a >> x;
            if (mp[a] == 0)
            {
                mp[a] = base + x;
            }
            else
            {
                mp[a] += x;
            }
        }
        else if (command == 3)
        {
            cin >> a;
            if (mp[a] == 0)
            {
                cout << base << endl;
            }
            else
            {
                cout << mp[a] << endl;
            }
        }
    }
}