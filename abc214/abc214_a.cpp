#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    if (n <= 125)
    {
        cout << 4;
    }
    else if (n <= 211)
    {
        cout << 6;
    }
    else
    {
        cout << 8;
    }
}