#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    string s;
    cin >> n >> s >> q;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    char c, d;
    for (int i = 0; i < q; i++)
    {
        cin >> c >> d;
        for (int j = 0; j < 26; j++)
        {
            if (alphabet[j] == c)
            {
                alphabet[j] = d;
            }
        }

        // alphabet[c - 97] = d;
    }

    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        cout << alphabet[s[i] - 97];
    }
}