#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int q;
    cin >> q;
    queue<string> que;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            string name;
            cin >> name;
            que.push(name);
        }
        else if (x == 2)
        {
            cout << que.front() << endl;
        }
        else
        {
            que.pop();
        }
    }
}