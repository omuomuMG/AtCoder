#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll on = 0;
    ll off = 0;
    for (int i = 0; i < (ll)s.size(); i++)
    {
        if (s[i] == '1')
        {
            on++;
        }
        else
        {
            off++;
        }
    }
    while (on > k) // off light
    {
        on -= 2;
        off += 2;
    }
    while (on < k)
    {
        off -= 2;
        on += 2;
    }
    if (on == k)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}