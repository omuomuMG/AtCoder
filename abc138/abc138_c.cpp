#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    while (1)
    {
        v[0] = (v[0] + v[1]) / 2;
        v.erase(v.begin() + 1);
        sort(all(v));
        if (v.size() <= 1)
        {
            cout << v[0];
            break;
        }
    }
}