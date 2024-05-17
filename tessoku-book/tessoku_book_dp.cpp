#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m);
    vector<ll> students(n, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        students[a[i] - 1]--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << m + students[i] << endl;
    }
}