#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int q;
    cin >> q;
    int a, b;
    vector<int> data;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        if (a == 1)
        {
            data.push_back(b);
        }
        else if (a == 2)
        {
            reverse(all(data));
            cout << data[b - 1] << endl;
            reverse(all(data));
        }
    }
}