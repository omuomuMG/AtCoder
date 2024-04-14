#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> data(n);
    for (int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        data[a].push_back(b);
        data[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        sort(data[i].begin(), data[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": {";
        for (int j = 0; j < data[i].size(); j++)
        {
            cout << data[i][j] + 1;
            if (j != data[i].size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
}