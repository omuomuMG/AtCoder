#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    // 包除原理を使う
    ll ans = n / 3 + n / 5 + n / 7;
    ans -= n / 15;
    ans -= n / 21;
    ans -= n / 35;
    ans += n / (3 * 5 * 7);
    cout << ans;
}