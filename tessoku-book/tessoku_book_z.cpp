#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll q;
    cin >> q;
    ll temp;
    bool state = false;
    for (int i = 0; i < q; i++)
    {
        state = false;
        cin >> temp;
        for (int j = 2; j <= sqrt(temp); j++)
        {
            if (temp % j == 0)
            {
                state = true;
                break;
            }
        }
        if (state == true)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}