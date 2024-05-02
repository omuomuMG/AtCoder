#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll q;
    cin >> q;
    stack<string> stk;
    int temp;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            string book;
            cin >> book;
            stk.push(book);
        }
        else if (temp == 2)
        {
            cout << stk.top() << endl;
        }
        else
        {
            stk.pop();
        }
    }
}