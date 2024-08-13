#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    if (n < (pow(2, 31)) && n >= -1 * (pow(2, 31)))
        cout << "Yes";
    else
        cout << "No";
}