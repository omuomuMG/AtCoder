#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int x, y;
    float temp;
    cin >> temp;
    x = floor(temp);
    y = (temp * 10);
    y = y % 10;

    if (y <= 2)
    {
        cout << x << "-";
    }
    else if (3 <= y && y <= 6)
    {
        cout << x;
    }
    else if (7 <= y && y <= 9)
    {
        cout << x << "+";
    }
}