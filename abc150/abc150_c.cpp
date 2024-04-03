#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    vector<int> array;
    for (int i = 1; i <= n; i++)
    {
        array.push_back(i);
    }
    int a = -100, b = -100;
    int count = 0;
    bool stateA = true;
    bool stateB = true;
    do
    {
        stateA = true;
        stateB = true;
        count++;
        for (int i = 0; i < n; i++)
        {
            if (array[i] != p[i])
            {
                stateA = false;
            }
            if (array[i] != q[i])
            {
                stateB = false;
            }
        }

        if (stateA == true)
        {
            a = count;
        }
        if (stateB == true)
        {
            b = count;
        }

    } while (next_permutation(array.begin(), array.end()));
    cout << abs(a - b);
}