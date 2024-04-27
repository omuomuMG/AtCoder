#include <bits/stdc++.h>

using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

ll binary(ll bina)
{
    ll ans = 0;
    for (int i = 0; bina > 0; i++)
    {
        ans = ans + (bina % 2) * pow(10, i);
        bina = bina / 2;
    }
    string temp = to_string(ans);
    ll counter = 0;
    for (int i = 0; i < (ll)temp.size(); i++)
    {
        if (temp[i] == '1')
        {
            counter++;
        }
    }

    cout << temp << endl;
    return counter;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {

        ll temp;
        cin >> temp;
        a.push_back(temp);

        while (1)
        {
            if (a.size() == 1)
            {
                break;
            }
            if (a[(ll)a.size() - 2] != a[(ll)a.size() - 1])
            {
                break;
            }
            if (a[(ll)a.size() - 2] == a[(ll)a.size() - 1])
            {

                ll front = a[(ll)a.size() - 2];

                // ll end_elm = a[(ll)a.size() - 1];
                a.pop_back();
                a.pop_back();
                if (front == 1)
                {
                    a.push_back(2);
                }
                else
                {
                    a.push_back(front + 1);
                }
            }
        }
        // cout << a.size() << endl;
    }
    cout << a.size() << endl;
}