#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int x, y;
    cin >> x >> y;

    int count = 0;
    while (x < y)
    {
        x += 10;
        count++;
    }
    cout << count;
}