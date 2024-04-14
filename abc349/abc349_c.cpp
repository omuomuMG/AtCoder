#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
char to_lowercase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }

    return c;
}

int main()
{
    string s, t;
    cin >> s >> t;

    for (char &c : t)
    {
        c = to_lowercase(c);
    }
    int current = 0;
    int current_x;
    for (int i = 0; i < s.size(); i++)
    {
        if (t[current] == s[i])
        {
            current++;
            if (current == 3)
            {
                cout << "Yes";
                return 0;
            }
        }
        if (current == 2 & t[2] == 'x')
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}