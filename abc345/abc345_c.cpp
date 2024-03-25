#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, ll> mp;
    bool state = false;

    ll len = s.size();
    for (ll i = 0; i < len; i++)
    {
        mp[s[i]]++;
        if (mp[s[i]] >= 2)
        {
            state = true;
        }
    }

    ll ans = 0;
    ll temp = len;
    for (ll i = 0; i < temp; i++)
    {
        len--;
        ans += len;
        mp[s[i]]--;
        ans -= mp[s[i]];
        // cout << len << endl;
    }
    if (state == true)
    {
        ans++;
    }

    cout << ans;
}