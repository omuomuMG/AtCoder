#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        a.push_back(make_pair(in, i));
    }
    sort(all(a));
    reverse(all(a));
    cout << a[1].second + 1;
}