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
    ll ans = 0;
    for (int i = 0; i <= 999; i++)
    {
        string current_pattern = to_string(i);

        for (int j = current_pattern.size(); j < 3; j++)
        {
            current_pattern = "0" + current_pattern;
        }
        // cout << current_pattern << endl;
        int index = 0;
        for (int j = 0; j < n; j++)
        {
            if (current_pattern[index] == s[j])
            {
                index++;
            }
            if (index == 3)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}