#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m, l;
    cin >> n;
    vector<int> a, b, c;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    cin >> m;
    rep(i, m)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }
    cin >> l;
    rep(i, l)
    {
        int temp;
        cin >> temp;
        c.push_back(temp);
    }
    ll q;
    cin >> q;
    vector<ll> x(q);
    for (int i = 0; i < q; i++)
    {
        cin >> x[i];
    }
    set<ll> data;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < l; k++)
            {
                data.insert(a[i] + b[j] + c[k]);
            }
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (data.find(x[i]) != data.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}