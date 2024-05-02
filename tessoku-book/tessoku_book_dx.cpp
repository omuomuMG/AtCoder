#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    stack<int> left, right;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '(')
        {
            left.push(i + 1);
        }
        else
        {
            cout << left.top() << " " << i + 1 << endl;
            left.pop();
        }
    }
}