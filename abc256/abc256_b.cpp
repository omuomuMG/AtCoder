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
    vector<ll> player;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        player.push_back(0);
        for (int j = 0; j < player.size(); j++)
        {
            player[j] += a[i];
        }
    }
    ll ans = 0;
    for (int i = 0; i < player.size(); i++)
    {
        if (player[i] > 3)
        {
            ans++;
        }
    }
    cout << ans;
}