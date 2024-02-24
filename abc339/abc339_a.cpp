#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            ans = "";
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans;
}