#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{

    ll n;
    cin >> n;
    string s;
    map<string, ll> mp;
    ll maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
        maxi = max(mp[s], maxi);
    }

    vector<pair<ll, string>> pr;
    for (auto [key, value] : mp)
    {
        if (maxi == value)
            pr.push_back(pair(value, key));
    }
    sort(all(pr));
    for (int i = 0; i < pr.size(); i++)
    {
        cout << pr[i].second << endl;
    }
}