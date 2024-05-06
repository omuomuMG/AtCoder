#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

    ll ans = 0;
    // hij
    for (int h11 = 1; h11 < min(h1, w1); h11++)
    {
        for (int h12 = 1; h12 < min(w1, h2); h12++)
        {
            for (int h21 = 1; h21 < min(h1, w2); h21++)
            {
                for (int h22 = 1; h22 < min(h2, w2); h22++)
                {
                    int h13 = w1 - h11 - h12;
                    int h23 = w2 - h21 - h22;

                    int h31 = h1 - h11 - h21;
                    int h32 = h2 - h12 - h22;

                    int h33 = h3 - h13 - h23;
                    if (h13 < 1 || h23 < 1 || h31 < 1 || h32 < 1 || h33 < 1)
                        continue;

                    if (h11 + h12 + h13 == w1 && h21 + h22 + h23 == w2 && h31 + h32 + h33 == w3)
                    {
                        if (h11 + h21 + h31 == h1 && h12 + h22 + h32 == h2 && h13 + h23 + h33 == h3)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout << ans;
}