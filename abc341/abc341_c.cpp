#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    // reverse(all(t));
    vector<string> s(h);
    ll ans = 0;
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    int x, y;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {

            if (s[i][j] == '.')
            {
                x = j;
                y = i;
                bool state = false;
                for (int k = 0; k < n; k++)
                {

                    if (t[k] == 'L')
                    {
                        x--;
                        if (x == -1)
                        {
                            state = true;
                            break;
                        }
                    }
                    else if (t[k] == 'R')
                    {
                        x++;
                        if (x == w)
                        {
                            state = true;
                            break;
                        }
                    }
                    else if (t[k] == 'U')
                    {
                        y--;
                        if (y == -1)
                        {
                            state = true;
                            break;
                        }
                    }
                    else if (t[k] == 'D')
                    {
                        y++;
                        if (y == h)
                        {
                            state = true;
                            break;
                        }
                    }
                    if (s[y][x] == '#')
                    {
                        state = true;
                        break;
                    }
                }
                if (state == false && s[y][x] == '.')
                {
                    ans++;
                    // cout << j << " " << i << endl;
                }
            }
        }
    }
    cout << ans;
}