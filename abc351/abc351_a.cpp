#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll sumA = 0;
    ll sumB = 0;
    for (int i = 0; i < 9; i++)
    {
        int a;
        cin >> a;
        sumA += a;
    }
    for (int i = 0; i < 8; i++)
    {
        int a;
        cin >> a;
        sumB += a;
    }
    ll temp = sumA - sumB;
    if (temp >= 0)
    {
        cout << temp + 1;
    }
    else
    {
        cout << 0;
    }
}