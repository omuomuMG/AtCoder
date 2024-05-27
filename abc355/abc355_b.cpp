#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        s.push_back(b[i]);
    }
    sort(all(s));

    sort(all(a));
    bool flag = false;
    for (int i = 0; i < n + m - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            // cout << "a";
            if (s[i] == a[j] && s[i + 1] == a[j + 1])
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}