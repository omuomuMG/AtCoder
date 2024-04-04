#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll x;
    int a, b;
    string s;
    cin >> a >> b >> s;
    bool state = false;
    for (int i = 0; i < a + b + 1; i++)
    {
        if (s[i] == '-')
        {
            if (i != a)
            {
                cout << "No";
                return 0;
            }
            else if (state)
            {
                cout << "No";
                return 0;
            }
            else if (i == a)
            {
                state = true;
            }
        }
    }
    if (state)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}