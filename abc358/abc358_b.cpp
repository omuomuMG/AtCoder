#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, a;
    cin >> n >> a;
    vector<ll> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    ll current_time = 0;
    for (int i = 0; i < n; i++)
    {
        if (current_time < t[i])
        {
            current_time = t[i] + a;
        }
        else
        {
            current_time += a;
        }
        cout << current_time << endl;
    }
}