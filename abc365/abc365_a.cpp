#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int y;
    cin >> y;
    if (y % 4 != 0)
    {
        cout << 365;
    }
    else if (y % 4 == 0 && y % 100 != 0)
    {
        cout << 366;
    }
    else if (y % 4 == 0 && y % 400 != 0)
    {
        cout << 365;
    }
    else if (y % 400 == 0)
    {
        cout << 366;
    }
}