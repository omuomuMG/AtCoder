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
    ans += s[0];

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != ans[ans.size() - 1])
        {
            ans += s[i];
        }
    }
    if (ans == "ABC" || ans == "A" || ans == "B" || ans == "C" || ans == "AB" || ans == "BC" || ans == "AC")
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}