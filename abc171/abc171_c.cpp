#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<char> abc(26);
    abc[0] = 'z';
    abc[1] = 'a';
    for (int i = 1; i < 26; i++)
    {
        abc[i] = abc[1] + i - 1;
    }

    string ans = "";
    int surplus;

    while (n > 0)
    {
        surplus = n % 26;
        ans += abc[surplus];
        n--;
        n /= 26;
    }
    reverse(all(ans));
    cout << ans;
}