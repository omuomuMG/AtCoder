#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, c_score;
    char c;
    cin >> n >> c;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    ll blue = 0;
    ll white = 0;
    ll red = 0;
    if (c == 'W')
    {
        c_score = 0;
    }
    else if (c == 'B')
    {
        c_score = 1;
    }
    else
    {
        c_score = 2;
    }

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            white++;
        else if (s[i] == 'B')
            blue++;
        else
            red++;
    }
    ll score = (blue % 3 + (red * 2) % 3) % 3;

    if (score == c_score)
        cout << "Yes";
    else
        cout << "No";
}