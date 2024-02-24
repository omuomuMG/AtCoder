#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    int i = a;
    while (i <= b)
    {
        cout << i << " ";
        i += d;
        if (i == b)
        {
            cout << i;
            break;
        }
    }
}