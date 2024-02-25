#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    vector<char> b(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<int, int>> data;
    for (int i = 0; i < n; i++)
    {
        string s = to_string(a[i]);
        int len = s.size();
        int temp = 0;
        for (int j = 0; j < len; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (s[j] == b[k])
                {
                    temp *= 10;
                    temp += k;
                    break;
                }
            }
        }
        data.push_back(pair(temp, a[i]));
    }
    sort(all(data));
    for (auto x : data)
    {
        cout << x.second << endl;
    }
}