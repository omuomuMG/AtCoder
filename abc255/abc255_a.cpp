#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int r, c;
    cin >> r >> c;
    r--;
    c--;
    vector<vector<int>> data(2, vector<int>(2));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> data[i][j];
        }
    }
    cout << data[r][c];
}