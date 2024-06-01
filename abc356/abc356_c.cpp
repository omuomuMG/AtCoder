#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int n, m, K;

string culc(ll num)
{
    string res = "";
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            res += "0";
        }
        else
        {
            res += "1";
        }
        num /= 2;
    }
    for (int i = res.length(); i < n; i++)
    {
        res += "0";
    }

    reverse(all(res));
    return res;
}

int main()
{
    cin >> n >> m >> K;
    vector<int> c(m);
    vector<vector<int>> a(m);
    vector<char> r(m);
    ll input;
    for (int i = 0; i < m; i++)
    {
        cin >> c[i];
        a[i].resize(c[i]);
        for (int j = 0; j < c[i]; j++)
        {
            cin >> a[i][j];
        }
        cin >> r[i];
    }

    ll ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        bool valid = true;
        for (int j = 0; j < m; j++)
        {
            int true_key_count = 0;
            for (int k = 0; k < c[j]; k++)
            {
                if (i & (1 << (a[j][k] - 1)))
                {
                    true_key_count++;
                }
            }
            if (r[j] == 'o' && true_key_count < K)
            {
                valid = false;
                break;
            }
            if (r[j] == 'x' && true_key_count >= K)
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
