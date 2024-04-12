#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    k -= (n - 1) * 2;
    if (k < 0 || k % 2 == 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}