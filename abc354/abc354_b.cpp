#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    ll sum = 0;
    ll c;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> c;
        sum += c;
    }
    sort(all(s));
    cout << s[sum % n];
}