#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    vector<ll> data(200100, 0);
    ll x, y;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        data[x]++;
        data[y]--;
    }

    for (int i = 1; i < 200100 - 1; i++)
    {
        data[i] += data[i - 1];
    }

    bool state = false;
    for (int i = 0; i < 200100 - 1; i++)
    {
        if (data[i] != 0 && state == false)
        {
            cout << i << " ";
            state = true;
        }
        else if (data[i] == 0 && state == true)
        {
            cout << i << endl;
            state = false;
        }
    }
}