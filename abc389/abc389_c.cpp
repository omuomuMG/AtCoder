
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int q;
    cin >> q;
    vector<ll> snakes; // 先頭からの距離
    int command;
    int top_index = 0;
    ll culm_distance = 0;

    for (int i = 0; i < q; i++)
    {
        cin >> command;
        if (command == 1)
        {
            int l;
            cin >> l;
            snakes.push_back(culm_distance);
            culm_distance += l;
        }
        else if (command == 2)
        {
            top_index++;
        }
        else if (command == 3)
        {
            int k;
            cin >> k;
            cout << snakes[top_index + k - 1] - snakes[top_index] << endl;
        }
    }
}