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
    vector<ll> count(101, 0);

    count[100] = 1;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i] % 100]++;
    }

    for (int i = 1; i < 50; i++)
    {
        ans += count[i] * count[100 - i];
    }
    ans += (count[0] * (count[0] - 1)) / 2;   // 0の数のnC2
    ans += (count[50] * (count[50] - 1)) / 2; // 50の数のnC2

    cout << ans << endl;
}