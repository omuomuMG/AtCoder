#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> x(n), y(n);
    string s;
    // y, Rmix(x), Lmax(x)
    unordered_map<ll, pair<ll, ll>> mp;
    // r,l
    unordered_map<ll, pair<ll, ll>> count;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    cin >> s;

    bool state;
    for (int i = 0; i < n; i++)
    {
        state = true;
        if (count[y[i]].first == 0 && s[i] == 'R')
        {
            mp[y[i]] = pair(x[i], mp[y[i]].second);
            count[y[i]].first++;
            state = false;
        }
        if (count[y[i]].second == 0 && s[i] == 'L')
        {
            mp[y[i]] = pair(mp[y[i]].first, x[i]);
            count[y[i]].second++;
            state = false;
        }

        if (state)
        {
            if (s[i] == 'R')
            {
                ll min_R = min(mp[y[i]].first, x[i]);
                mp[y[i]] = pair(min_R, mp[y[i]].second);
                count[y[i]].first++;
            }
            else
            {
                ll max_L = max(mp[y[i]].second, x[i]);
                mp[y[i]] = pair(mp[y[i]].first, max_L);
                count[y[i]].second++;
            }
        }

        if (count[y[i]].first > 0 && count[y[i]].second > 0 && mp[y[i]].first <= mp[y[i]].second)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No";
}
