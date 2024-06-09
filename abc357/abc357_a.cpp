#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n; i++)
    {
        m -= h[i];
        if (m >= 0)
        {
            ans++;
        }
    }
    cout << ans;
}