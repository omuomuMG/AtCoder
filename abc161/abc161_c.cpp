#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    ll temp;
    cin >> n >> k;
    while (1)
    {
        if (n > k)
        {
            temp = n % k;
            // n = n / k;
            n = temp;
        }
        else if (n < k)
        {
            if (abs(n - k) < abs(n))
            {
                n = abs(n - k);
            }
            else
                break;
        }
        else if (n == k)
        {
            n = 0;
            break;
        }
    }
    cout << n;
}