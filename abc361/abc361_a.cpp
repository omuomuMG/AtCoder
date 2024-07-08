#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    cout << x << " ";
    for (int i = k; i < n; i++)
    {
        cout << a[i] << " ";
    }
}