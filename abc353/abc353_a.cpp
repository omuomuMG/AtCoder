#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    cin >> h[0];
    bool state = false;
    int ans = -1;

    for (int i = 1; i < n; i++)
    {
        cin >> h[i];
        if (h[0] < h[i] && state == false)
        {
            ans = i + 1;
            state = true;
        }
    }
    cout << ans;
}