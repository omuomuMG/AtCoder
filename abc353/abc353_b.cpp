#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    queue<int> que;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        que.push(a);
    }
    int count = 0;
    int seat = k;
    while (!que.empty())
    {
        int top = que.front();
        if (top > seat)
        {
            count++;
            seat = k;
        }
        else
        {
            seat -= top;
            que.pop();
        }
    }
    cout << count + 1;
}