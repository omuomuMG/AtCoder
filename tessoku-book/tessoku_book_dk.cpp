#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    string s;
    cin >> n >> s;
    ll current_streak = 1;
    vector<ll> stereak_left(n);
    vector<ll> stereak_right(n);

    stereak_left[0] = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'A')
        {
            current_streak++;
        }
        else
        {
            current_streak = 1;
        }
        stereak_left[i + 1] = current_streak;
    }
    stereak_right[n - 1] = 1;
    current_streak = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == 'A')
        {
            current_streak = 1;
        }
        else
        {
            current_streak++;
        }
        stereak_right[i] = current_streak;
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += max(stereak_left[i], stereak_right[i]);
    }
    cout << sum << endl;
}