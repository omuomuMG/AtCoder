#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<vector<ll>> cum(2, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        ll c, p;
        cin >> c >> p;
        cum[c - 1][i] = p;
    }
    ll q;
    cin >> q;
    vector<ll> l(q), r(q);
    for (int i = 0; i < q; i++)
    {
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < cum[i].size(); j++)
        {
            cum[i][j] += cum[i][j - 1];
        }
    }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < cum[i].size(); j++)
    //     {
    //         cout << cum[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < q; i++)
    {
        cout << cum[0][r[i]] - cum[0][l[i] - 1] << " " << cum[1][r[i]] - cum[1][l[i] - 1] << endl;
    }
}