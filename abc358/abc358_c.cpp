#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<bitset<10>> stalls(N);

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < M; j++)
        {
            if (s[j] == 'o')
            {
                stalls[i][j] = 1;
            }
        }
    }

    int min_stalls = N;

    for (int mask = 1; mask < (1 << N); mask++)
    {
        bitset<10> combined;
        int count = 0;

        for (int i = 0; i < N; i++)
        {
            if (mask & (1 << i))
            {
                combined |= stalls[i];
                count++;
            }
        }

        if (combined.count() == M)
        {
            min_stalls = min(min_stalls, count);
        }
    }

    cout << min_stalls << endl;
    return 0;
}
