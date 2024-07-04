#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int n, m;
string binary(int num)
{
    string res = "";
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            res += '0';
        }
        else
        {
            res += '1';
        }
        num /= 2;
    }
    for (int i = res.size(); i < n; i++)
    {
        res += '0';
    }
    // cout << res << endl;
    return res;
}

int main()
{
    ll x;
    cin >> n >> m >> x;
    vector<ll> c(n);
    vector<vector<ll>> a(n, vector<ll>(m));
    ll cost = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < (1 << (n)); i++)
    {
        string pattern = binary(i);
        vector<ll> mature(m, 0);
        bool state = true;
        ll current_cost = 0;
        for (int k = 0; k < n; k++)
        {
            if (pattern[k] == '1')
            {
                current_cost += c[k];
                for (int j = 0; j < m; j++)
                {
                    mature[j] += a[k][j];
                }
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (mature[j] < x)
            {
                state = false;
                break;
            }
        }
        if (state)
            cost = min(cost, current_cost);
    }
    if (cost != LLONG_MAX)
        cout << cost << endl;
    else
        cout << -1;
}