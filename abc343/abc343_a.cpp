#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < 10; i++)
    {
        if (a + b != i)
        {
            cout << i;
            break;
        }
    }
}