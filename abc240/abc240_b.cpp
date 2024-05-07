#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.insert(temp);
    }
    cout << a.size();
}