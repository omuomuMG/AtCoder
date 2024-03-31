#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
        {
            b.push_back(a[i] / k);
        }
    }
    sort(all(b));
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}