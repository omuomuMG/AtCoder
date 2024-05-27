#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<bool> x(3, false);
    x[a - 1] = true;
    x[b - 1] = true;
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < 3; i++)
    {
        if (x[i] == false)
        {
            ans.push_back(i + 1);
        }
    }
    if (ans.size() == 1)
    {
        cout << ans[0];
    }
    else
    {
        cout << -1;
    }
}