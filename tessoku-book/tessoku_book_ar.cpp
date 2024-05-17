#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    ll command;
    bool isReverse = false;
    ll x, y;
    for (ll i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            cin >> x >> y;
            if (isReverse == false)
            {
                a[x - 1] = y;
            }
            else
            {
                a[n - x] = y;
            }
        }
        else if (command == 2)
        {
            isReverse = !isReverse;
        }
        else if (command == 3)
        {
            cin >> x;
            if (isReverse == false)
            {
                cout << a[x - 1] << endl;
            }
            else
            {
                cout << a[n - x] << endl;
            }
        }
    }
}