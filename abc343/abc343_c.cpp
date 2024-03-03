#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    // n以下の数の3乗を考える

    ll ans = 0;
    vector<string> data;
    for (ll i = 1; 1; i++)
    {
        if (i * i * i > n)
        {
            break;
        }
        data.push_back(to_string(i * i * i));
    }
    for (ll i = data.size() - 1; i >= 0; i--)
    {
        string temp = data[i];
        reverse(all(temp));
        if (data[i] == temp)
        {
            cout << data[i];
            return 0;
        }
    }
}