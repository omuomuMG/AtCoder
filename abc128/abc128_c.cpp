#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int len;
string bin(int n)
{
    string s = "";
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            s += "1";
        }
        else
        {
            s += "0";
        }
        n /= 2;
    }
    for (int i = s.size(); i < len; i++)
    {
        s += "0";
    }
    reverse(all(s));
    return s;
}

int main()
{
    int n, m;
    cin >> n >> m;
    len = n;
    vector<int> k(m), p(m);
    vector<vector<int>> s(m);
    for (int i = 0; i < m; i++)
    {
        cin >> k[i];
        for (int j = 0; j < k[i]; j++)
        {
            int input_s;
            cin >> input_s;
            s[i].push_back(input_s);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    vector<int> on_count(m);

    bool state;
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        string binary = bin(i);
        // cout << binary << endl;
        state = true;
        for (int j = 0; j < m; j++)
            on_count[j] = 0;
        for (int j = 0; j < m; j++)
        {
            for (int l = 0; l < k[j]; l++)
            {
                if (binary[s[j][l] - 1] == '1')
                {
                    on_count[j]++;
                }
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (on_count[j] % 2 != p[j])
            {
                state = false;
                break;
            }
        }
        if (state)
            ans++;
    }
    cout << ans;
}