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
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'R')
            state = true;
        if (s[i] == 'M' && state)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}