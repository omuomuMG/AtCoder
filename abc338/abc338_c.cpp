#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> InputQ(n), InputA(n), InputB(n), a(n), b(n), q(n);

    for (int i = 0; i < n; i++)
        cin >> InputQ[i];
    for (int i = 0; i < n; i++)
        cin >> InputA[i];
    for (int i = 0; i < n; i++)
        cin >> InputB[i];

    // 料理Aの数を固定した時の最大個数を数える.
    int countA = 0;
    int countB = 0;
    int ans = 0;
    bool isb = false;

    while (1)
    {
        q = InputQ;
        a = InputA;
        b = InputB;
        int temp = 0;
        isb = false;
        for (int i = 0; i < n; i++)
        {
            q[i] -= a[i] * countA;
            if (q[i] < 0)
            {
                if (countA == 0)
                {
                    q = InputQ;
                    for (int j = 0; j < n; j++)
                    {
                        if (j == n - 1 && b[j] == 0)
                        {
                            if (isb == true)
                            {
                                cout << 0;
                                return 0;
                            }
                        }
                        if (b[j] == 0 && j == 0)
                        {
                            isb = true;
                            continue;
                        }
                        if (b[j] == 0)
                        {
                            continue;
                        }
                        temp = q[j] / b[j];
                        if (j == 0 || isb == true)
                        {
                            isb = false;
                            countB = temp;
                        }
                        countB = min(countB, temp);
                    }
                    ans = countB;
                }
                cout << ans;
                return 0;
            }
        }
        isb = false;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0 && i == 0)
            {
                isb = true;
                continue;
            }

            if (b[i] == 0)
            {
                continue;
            }
            temp = q[i] / b[i];
            if (i == 0 || isb == true)
            {
                isb = false;
                countB = temp;
            }
            countB = min(countB, temp);
        }
        ans = max(ans, countA + countB);
        countA++;
    }
}
