#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int current = 0;
    char t;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> a;
        if (t == '+')
        {
            current += a;
            current %= 10000;
        }
        else if (t == '-')
        {
            current -= a;
            if (current < 0)
                current += 10000;
            current %= 10000;
        }
        else if (t == '*')
        {
            current *= a;
            current %= 10000;
        }
        cout << current << endl;
    }
}