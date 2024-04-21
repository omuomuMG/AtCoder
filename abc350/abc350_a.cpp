#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    s.erase(s.begin(), s.begin() + 3);
    // temp += to_string(s[4]) + to_string(s[5]);
    // cout << temp << endl;
    int num = stoi(s);
    if (num == 316 || num > 349 || num == 000 || num == 00 || num == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}