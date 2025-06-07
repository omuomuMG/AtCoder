#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    int deposit = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        int current_num = s[i] - '0';

        for (int j = 0; j <= 10; j++)
        {
            if ((deposit + j) % 10 == current_num)
            {
                count += j;
                deposit += j;
                break;
            }
        }
        deposit %= 10;
    }
    count += s.length();
    cout << count << endl;
}