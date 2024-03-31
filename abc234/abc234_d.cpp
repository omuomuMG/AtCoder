#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    priority_queue<int, vector<int>, greater<int>> que; //.topは最小値になる
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < k; i++)
    {
        que.push(p[i]);
    }

    cout << que.top() << endl; // 最初に出力されるのは最も小さな値
    for (int i = k; i < n; i++)
    {
        if (que.top() < p[i]) // K番目に大きい値が変わってしまう（実験したらわかる）
        {
            que.pop();
            que.push(p[i]);
        }
        cout << que.top() << endl;
    }
}