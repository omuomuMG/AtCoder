#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;

    string atcoder = "atcoder";
    int count = 0;
    int atcoder_index = 0;
    int current_index = 0;
    while (atcoder != s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (atcoder[atcoder_index] == s[i])
            {
                current_index = i;
            }
        }

        while (current_index < atcoder_index)
        {
            swap(s[current_index], s[current_index + 1]);
            current_index++;
            count++;
        }
        while (current_index > atcoder_index)
        {
            swap(s[current_index], s[current_index - 1]);
            current_index--;
            count++;
        }
        atcoder_index++;
    }
    cout << count;
}