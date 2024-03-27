#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    double temp = y * z - 1;
    cout << (int)(temp / x);
}