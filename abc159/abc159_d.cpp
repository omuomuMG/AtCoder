#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll sum = 0;
    for (auto [key, value] : mp)
    {
        if (value > 1)
        {
            sum += (value * (value - 1)) / 2;
        }
    }

    ll temp;
    ll value;

    for (int i = 0; i < n; i++)
    {
        value = mp[a[i]];
        if (value <= 1)
        {
            cout << sum << endl;
        }
        else
        {
            temp = sum;
            temp -= (value * (value - 1)) / 2;
            value--;
            temp += (value * (value - 1)) / 2;
            cout << temp << endl;
        }
    }
}