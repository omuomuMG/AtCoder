#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll q;
    cin >> q;
    int t, a, b;
    char temp;
    string fir = "";
    string sec = "";
    string temp2;
    bool state = false;
    int twmp3;

    for (int i = 0; i < n; i++)
    {
        fir += s[i];
    }
    for (int i = n; i < 2 * n; i++)
    {
        sec += s[i];
    }
    // cout << fir << " " << sec << endl;

    for (int i = 0; i < q; i++)
    {
        cin >> t >> a >> b;

        if (t == 1)
        {
            if (b > n && a <= n)
            {
                b -= n;
                temp = fir[a - 1];
                fir[a - 1] = sec[b - 1];
                sec[b - 1] = temp;
            }
            else if (b <= n)
            {
                temp = fir[a - 1];
                fir[a - 1] = fir[b - 1];
                fir[b - 1] = temp;
            }
            else
            {
                // aが大きい
                b -= n;
                a -= n;
                temp = sec[a - 1];
                sec[a - 1] = sec[b - 1];
                sec[b - 1] = temp;
            }
        }
        else
        {
            swap(fir, sec);
        }
    }
    cout << fir << sec;
}