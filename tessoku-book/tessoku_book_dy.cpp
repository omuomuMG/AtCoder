#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    string a;
    cin >> a;
    queue<int> q;
    a[x - 1] = '@';
    q.push(x - 1);

    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        if (pos - 1 >= 0 && a[pos - 1] == '.')
        {
            a[pos - 1] = '@';
            q.push(pos - 1);
        }
        if (pos + 1 < (int)a.size() && a[pos + 1] == '.')
        {
            a[pos + 1] = '@';
            q.push(pos + 1);
        }
    }
    cout << a;
}