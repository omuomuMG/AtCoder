#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n, q;
    cin >> n >> q;
    unordered_map<ll, ll> num_to_index;
    unordered_map<ll, ll> index_to_num;
    for (int i = 0; i < n; i++)
    {
        num_to_index[i + 1] = i;
        index_to_num[i] = i + 1;
    }

    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;

        ll next_index = num_to_index[x] + 1; // 次の要素があるインデックス
        if (next_index == n)
        {
            next_index = n - 2;
        }
        // 数xのインデックスを次のインデックスにする
        ll temp = num_to_index[x];
        num_to_index[x] = next_index;

        // 次の数字を取得
        ll next_value = index_to_num[next_index];

        num_to_index[next_value] = temp;

        swap(index_to_num[num_to_index[x]], index_to_num[num_to_index[next_value]]);
        // for (int j = 0; j < n; j++)
        // {
        //     cout << index_to_num[j] << " ";
        // }
        // cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << index_to_num[i] << " ";
    }
}