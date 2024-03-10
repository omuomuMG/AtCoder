#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    bool state = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '|')
        {
            if (state == false)
                cout << s[i];
        }
        else
        {
            if (state == true)
            {
                state = false;
            }
            else
            {
                state = true;
            }
        }
    }
}