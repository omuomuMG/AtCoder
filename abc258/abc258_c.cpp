#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string temp = s;
    while (s.size() < n * 3)
    {
        s += temp;
    }

    ll current_first = s.size() - 1 - n;
    ll t, x;
    for (int i = 0; i < q; i++)
    {
        cin >> t >> x;
        if (t == 1)
        {

            current_first -= x;
            if (current_first < n)
            {
                current_first += n;
            }
        }
        else
        {
            cout << s[current_first + x] << endl;
        }
    }
}