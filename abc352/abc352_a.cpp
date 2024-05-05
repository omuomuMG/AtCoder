#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if (x >= z && z >= y)
    {
        cout << "Yes";
    }
    else if (x <= z && z <= y)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
