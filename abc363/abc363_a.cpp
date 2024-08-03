#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int r;
    cin >> r;
    if (r <= 99)
    {
        cout << 100 - r;
    }
    else if (r <= 199)
    {
        cout << 200 - r;
    }
    else if (r <= 299)
    {
        cout << 300 - r;
    }
}