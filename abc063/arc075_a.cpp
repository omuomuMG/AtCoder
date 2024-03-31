#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    ll sum = 0;
    rep(i, n)
    {
        cin >> s[i];
        sum += s[i];
    }
    sort(all(s));
    ll temp;
    if (sum % 10 != 0)
    {
        cout << sum;
        return 0;
    }
    while (1)
    {
        for (int i = 0; i < s.size(); i++)
        {
            temp = sum;
            temp -= s[i];
            if (temp % 10 != 0)
            {
                cout << temp;
                return 0;
            }
        }
        sum -= s[0];
        s.erase(s.begin());
        if (sum == 0)
        {
            cout << 0;
            return 0;
        }
    }
}