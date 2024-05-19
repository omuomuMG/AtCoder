#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h;
    cin >> h;
    ll current = 0;
    ll i = 0;
    while (current <= h)
    {
        current += pow(2, i);
        i++;
    }
    cout << i;
}