#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < n; j++)
        {
            if (p[j] == a)
            {
                cout << a << endl;
                break;
            }
            else if (p[j] == b)
            {
                cout << b << endl;
                break;
            }
        }
    }
}