#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;

    ll size = pow(3, n);
    vector<vector<char>> carpet(size, vector<char>(size, '#'));

    for (int k = 0; k < n; ++k)
    {
        int blockSize = pow(3, k);
        for (int i = 0; i < size; i += blockSize * 3)
        {
            for (int j = 0; j < size; j += blockSize * 3)
            {
                for (int x = 0; x < blockSize; x++)
                {
                    for (int y = 0; y < blockSize; y++)
                    {
                        carpet[i + blockSize + x][j + blockSize + y] = '.';
                    }
                }
            }
        }
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cout << carpet[i][j];
        }
        cout << endl;
    }

    return 0;
}
