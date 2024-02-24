#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto [key, value] : mp)
    {
        if (value == 1)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == key)
                {
                    cout << i + 1;
                    return 0;
                }
            }
        }
    }
}