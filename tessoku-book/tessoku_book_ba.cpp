#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int q;
    cin >> q;
    int command, que;
    priority_queue<int, vector<int>, greater<int>> pr_que;
    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            int x;
            cin >> x;
            pr_que.push(x);
        }
        else if (command == 2)
        {
            cout << pr_que.top() << endl;
        }
        else
        {
            pr_que.pop();
        }
    }
}