#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll x;
    cin >> x;
    for (int i = x; 1; i++)
    {
        bool state = false;
        for (int j = 2; j < x; j++)
        {
            if (i % j == 0)
            {
                state = true;
            }
        }
        if (!state)
        {
            cout << i;
            return 0;
        }
    }
}