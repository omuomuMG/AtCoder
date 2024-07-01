#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    bool state = false;
    for (int i = 1; i < s.size(); i++) // 区切る間隔
    {
        for (int k = 0; k < i; k++) // 何文字目について考えるか
        {
            string check = "";
            for (int j = k; j < s.size(); j += i)
            {
                check += s[j];
            }
            if (t == check)
                state = true;
            // cout << "" << " " << check << endl;
        }
    }
    if (state)
        cout << "Yes";
    else
        cout << "No";
}