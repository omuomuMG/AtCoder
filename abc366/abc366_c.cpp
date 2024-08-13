#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll q;
    cin >> q;
    unordered_map<ll, ll> mp;
    int command;
    ll x;
    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            cin >> x;
            mp[x]++;
        }
        else if (command == 2)
        {
            cin >> x;
            mp[x]--;
            if (mp[x] <= 0)
                mp.erase(x);
        }
        else
        {
            cout << mp.size() << endl;
        }
    }
}