#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            if (s[0] != '<')
            {
                cout << "No";
                return 0;
            }
        }
        else if (i == s.size() - 1)
        {
            if (s[i] != '>')
            {
                cout << "No";
                return 0;
            }
        }
        else if (s[i] != '=')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}