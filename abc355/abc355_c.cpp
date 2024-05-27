#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, t;
    cin >> n >> t;
    vector<vector<bool>> stage(n, vector<bool>(n, false));
    vector<ll> a(t);
    ll x, y;
    ll ans = -1;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        y = a[i] / n;
        x = a[i] % n;

        if (x == 0)
        {
            x = n - 1;
            y--;
        }
        else
        {
            x--;
        }

        stage[y][x] = true;
        if (ans == -1)
        {
            bool ans_row = true;
            bool ans_high = true;

            for (int j = 0; j < n; j++) // row
            {
                if (stage[y][j] == false)
                {
                    ans_row = false;
                }
                if (stage[j][x] == false)
                {
                    ans_high = false;
                }
                if (ans_row == false && ans_high == false)
                {
                    break;
                }
            }
            if ((ans_high || ans_row) && ans == -1)
            {
                ans = i + 1;
                // cout << "a";
            }
            bool ans1 = true;
            bool ans2 = true;
            for (int j = 0; j < n; j++)
            {
                if (stage[j][j] == false)
                {
                    ans1 = false;
                }
                if (stage[j][n - j - 1] == false)
                {
                    ans2 = false;
                }
                if (ans1 == false && ans2 == false)
                {
                    break;
                }
            }
            if ((ans1 || ans2) && ans == -1)
            {
                ans = i + 1;
                // cout << "b";
            }
        }
    }
    cout << ans;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << stage[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}