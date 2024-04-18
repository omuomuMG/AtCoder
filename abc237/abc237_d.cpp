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
    deque<ll> left, right;
    ll pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            left.push_back(pre);
            pre = i + 1;
        }
        else if (s[i] == 'L')
        {
            right.push_front(pre);
            pre = i + 1;
        }
    }
    ll left_size = (ll)left.size();
    ll right_size = (ll)right.size();
    for (int i = 0; i < left_size; i++)
    {
        cout << left.front() << " ";
        left.pop_front();
    }
    cout << pre << " ";
    for (int i = 0; i < right_size; i++)
    {
        cout << right.front() << " ";
        right.pop_front();
    }
}