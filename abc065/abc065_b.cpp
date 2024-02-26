#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll i = 0;
    ll current = a[i];
    while (1)
    {
        if (current == 2)
        {
            cout << i + 1 << endl;
            break;
        }
        current = a[current - 1];
        i++;
        if (i >= n)
        {
            cout << -1 << endl;
            break;
        }
    }
}