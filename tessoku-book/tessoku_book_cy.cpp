#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<bool> a(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            if (j % i == 0 && i != j)
            {
                a[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == true)
        {
            cout << i << endl;
        }
    }
}