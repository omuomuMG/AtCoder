#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    // memo化する
    map<ll, ll> mp;
    ll sum = 0;
    ll small;
    ll large;
    ll temp;
    mp[n]++;
    while (1)
    {
        n = mp.rbegin()->first;
        if (n == 1)
            break;
        //cout << n << endl;
        if (n % 2 == 0)
        {
            temp = mp[n];
            sum += n * temp;
            mp.erase(n);
            n /= 2;
            small = n;
            large = n;

            mp[n] += temp * 2;
        }
        else
        {
            temp = mp[n];
            sum += n * temp;
            mp.erase(n);
            n /= 2;
            small = n;
            large = n + 1;
            mp[small] += temp;
            mp[large] += temp;
        }
        // cout << small << " " << large << endl;
    }
    cout << sum;
}