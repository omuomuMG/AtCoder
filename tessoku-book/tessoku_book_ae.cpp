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
    ll ans = n / 3 + n / 5;
    ans -= n / 15;
    cout << ans;
}