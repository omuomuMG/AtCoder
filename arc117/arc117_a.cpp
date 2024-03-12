#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    // 解説AC
    int a, b;
    cin >> a >> b;
    // 偶数の最後を決めれば良い
    if (a > b)
    {
        int res = 0;
        for (int i = 1; i <= a; i++)
        {
            cout << i << " ";
            res += i;
        }

        for (int i = 1; i < b; i++)
        {
            cout << -i << " ";
            res -= i;
        }

        cout << -res;
    }
    else // 奇数の最後を決めれば良い
    {
        int res = 0;
        for (int i = 1; i < a; i++)
        {
            cout << i << " ";
            res += i;
        }

        for (int i = 1; i <= b; i++)
        {
            cout << -i << " ";
            res -= i;
        }

        cout << -res;
    }
}