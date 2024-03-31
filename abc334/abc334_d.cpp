#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> temp(n), r(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    sort(all(temp));
    r[0] = temp[0];

    for (int i = 1; i < n; i++)
    {
        r[i] = temp[i] + r[i - 1];
    }

    ll query;
    for (int i = 0; i < q; i++)
    {
        cin >> query;
        ll right = n - 1;
        ll left = 0;
        ll mid;
        bool state = false;
        while (left <= right)
        {
            mid = (right + left) / 2;
            if (r[mid] == query)
            {
                state = true;
                break;
            }
            else if (r[mid] > query)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        if (state == false)
        {
            if (r[mid] > query)
            {
                mid--;
            }
        }
        cout << mid + 1 << endl;
    }
}