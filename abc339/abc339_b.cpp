#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> data(h, vector<char>(w, '.'));
    int state = 0;
    int row = 0;
    int column = 0;

    for (int i = 0; i < n; i++)
    {

        if (data[column][row] == '.')
        {
            state++;
            data[column][row] = '#';
        }
        else
        {
            state--;
            data[column][row] = '.';
        }
        if (state > 3)
        {
            state = 0;
        }
        if (state < -3)
        {
            state = 0;
        }

        if (state == 0) // 上
        {
            column--;
            if (column < 0)
            {
                column = h - 1;
            }
        }
        else if (state == 1 || state == -3) // 右
        {
            row++;
            if (row >= w)
            {
                row = 0;
            }
        }
        else if (state == 2 || state == -2) // 下
        {
            column++;
            if (column >= h)
            {
                column = 0;
            }
        }
        else if (state == 3 || state == -1) // 左
        {
            row--;
            if (row < 0)
            {
                row = w - 1;
            }
        }
        // for (int i = 0; i < h; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         cout << data[i][j]a;
        //     }
        //     cout << endl;
        // }
        // cout << endl;
    }
    //     else if ()
    //     {
    //         state--;
    //         data[column][row] = '.';
    //         if (state == 0) // 上
    //         {
    //             column--;
    //             if (column < 0)
    //             {
    //                 column = h - 1;
    //             }
    //         }
    //         else if (state == 1) // 左
    //         {
    //             row--;
    //             if (row < 0)
    //             {
    //                 row = w - 1;
    //             }
    //         }
    //         else if (state == 2) // した
    //         {
    //             column++;
    //             if (column >= h)
    //             {
    //                 column = 0;
    //             }
    //         }
    //         else if (state == 3) // 右
    //         {
    //             row++;
    //             if (row >= w)
    //             {
    //                 row = 0;
    //             }
    //         }
    //     }
    //     for (int i = 0; i < h; i++)
    //     {
    //         for (int j = 0; j < w; j++)
    //         {
    //             cout << data[i][j];
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << data[i][j];
        }
        cout << endl;
    }
}