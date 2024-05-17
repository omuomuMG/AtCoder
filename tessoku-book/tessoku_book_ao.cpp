#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    string s;

    cin >> n >> s;
    int r = 0;
    int b = 0;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            r++;
            b = 0;
            if (r >= 3)
                ans = true;
        }
        else if (s[i] == 'B')
        {
            b++;
            r = 0;
            if (b >= 3)
                ans = true;
        }
    }
    if (ans)
        cout << "Yes";
    else
        cout << "No";
}