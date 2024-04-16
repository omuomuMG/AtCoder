#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<bool> b(n, false);
    int i = x - 1;
    int count = 0;
    while (1)
    {
        if (b[i] == false)
        {
            count++;
            b[i] = true;
            i = a[i] - 1;
        }
        else
        {
            break;
        }
    }
    cout << count;
}