#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll sum = 0;
    set<string> temp;

    for (int i = 0; i < s.size(); i++)
    {
        string current = "";
        for (int j = i; j < s.size(); j++)
        {
            current += s[j];
            temp.insert(current);
        }
    }
    cout << temp.size();
}