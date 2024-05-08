#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    string rev_str = "";
    for (int i = l - 1; i < r; i++)
    {
        rev_str += s[i];
    }
    reverse(all(rev_str));
    for (int i = 0; i < l - 1; i++)
    {
        cout << s[i];
    }
    cout << rev_str;
    for (int i = r; i < s.size(); i++)
    {
        cout << s[i];
    }
}