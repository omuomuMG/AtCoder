#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    sort(all(l));
    if (l[n - p] >= t)
    {
        cout << 0;
        return 0;
    }
    else
    {
        cout << t - l[n - p];
    }
}