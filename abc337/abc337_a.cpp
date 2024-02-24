#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, x, y;
    int a = 0;
    int t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a += y;
        t += x;
    }
    if (a > t)
    {
        cout << "Aoki";
    }
    else if (a < t)
    {
        cout << "Takahashi";
    }
    else
    {
        cout << "Draw";
    }
}