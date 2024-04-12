#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    // 映画の終了時刻が早い順番を貪欲に考えていく
    ll n;
    cin >> n;
    vector<pair<ll, ll>> data(n);
    ll l, r;

    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        data[i] = pair(r, l);
    }
    sort(all(data));
    ll count = 0;

    ll current_time = 0;
    for (int i = 0; i < n; i++)
    {
        if (current_time <= data[i].second)
        {
            count++;
            current_time = data[i].first;
        }
    }
    cout << count << endl;
}