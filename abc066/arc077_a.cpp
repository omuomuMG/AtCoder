#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    deque<ll> a;
    bool state = false;
    ll input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (state == false)
        {
            a.push_back(input);
            state = true;
        }
        else
        {
            a.push_front(input);
            state = false;
        }
    }
    if (state == false)
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    else
        for (int i = n - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
}