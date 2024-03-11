#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int gcd(int a, int b)
{
    while (a >= 1 && b >= 1)
    {
        if (a >= b)
        {
            a = a % b; // Aの値を変更する場合
        }
        else
        {
            b = b % a; // Bの値を変更する場合
        }
    }
    if (a != 0)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}