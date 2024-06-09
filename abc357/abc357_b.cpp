#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int big = 0, small = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            big++;
        }
        else
        {
            small++;
        }
    }

    if (big > small)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
}