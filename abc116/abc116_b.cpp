#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;

    vector<int> a;
    int i = 0;
    mp[n]++;
    a.push_back(n);
    ll temp;
    while (1)
    {

        if (a[i] % 2 == 0)
        {
            temp = a[i] / 2;
        }
        else
        {
            temp = a[i] * 3 + 1;
        }
        a.push_back(temp);
        mp[temp]++;
        if (mp[temp] >= 2)
        {
            cout << i + 2;
            return 0;
        }
        i++;
    }
}