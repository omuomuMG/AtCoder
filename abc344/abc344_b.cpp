#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    vector<ll> a;
    ll temp;
    while (1)
    {
        cin >> temp;
        a.push_back(temp);
        if (temp == 0)
        {
            break;
        }
    }
    reverse(all(a));
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
}