#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, t, a;
    cin >> n >> t >> a;
    float half = n / 2;
    if (half < t || half < a)
    {
        cout << "Yes";
    }
    else
        cout << "No";
}