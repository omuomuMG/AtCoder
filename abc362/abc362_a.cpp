#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int r, g, b;
    string c;
    cin >> r >> g >> b >> c;
    if (c == "Red")
        cout << min(g, b);
    else if (c == "Blue")
        cout << min(r, g);
    else if (c == "Green")
        cout << min(r, b);
}