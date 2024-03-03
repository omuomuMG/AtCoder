#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<pair<int, int>> data;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                data.push_back(pair(i, j));
                // data.push_back(pair(j, i));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < data.size(); k++)
            {
                if (data[k].first == i && data[k].second == j)
                {
                    cout << j + 1 << " ";
                }
            }
        }
        cout << endl;
    }
}