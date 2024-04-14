#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    cout << sum * -1;
}