#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    pair<int, int> fir, sec;
    bool state = false;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == 'o')
            {
                if (state == false)
                {
                    fir.first = i;
                    fir.second = j;
                    state = true;
                }
                else
                {
                    sec.first = i;
                    sec.second = j;
                }
            }
        }
    }
    cout << abs(fir.second - sec.second) + abs(fir.first - sec.first);
}