#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp; // ボールの種類:個数
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    ll cum = 0;
    for (auto [key, value] : mp)
    {
        cum += (value * (value - 1)) / 2;
    }

    for (int i = 0; i < n; i++)
    {
        cum -= (mp[a[i]] * (mp[a[i]] - 1)) / 2;

        ll value = mp[a[i]] - 1;

        cum += (value * (value - 1)) / 2;
        cout << cum << endl;

        cum += (mp[a[i]] * (mp[a[i]] - 1)) / 2;
        cum -= (value * (value - 1)) / 2;
    }
}