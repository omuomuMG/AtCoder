#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

class SegmentTree
{
public:
    vector<int> dat;
    int size = 1;

    void init(int n)
    {
        size = 1;
        while (size < n)
            size *= 2;
        dat.resize(size * 2, 0);
    }
    void update(int pos, int x)
    {
        pos = pos + size - 1;
        dat[pos] = x;
        // 値を更新
        while (pos >= 2)
        {
            pos /= 2;
            dat[pos] = dat[pos * 2] + dat[pos * 2 + 1];
        }
    }
    int query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l)
            return 0; // 一切含まれない場合
        if (l <= a && b <= r)
            return dat[u]; // 完全に含まれる場合

        int m = (a + b) / 2;
        int AnswerL = query(l, r, a, m, u * 2);
        int AnswerR = query(l, r, m, b, u * 2 + 1);
        return AnswerL + AnswerR;
    }
};

int Query[100009], pos[100009], x[100009], l[100009], r[100009];
int main()
{
    ll n, q;
    cin >> n >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> Query[i];
        if (Query[i] == 1)
            cin >> pos[i] >> x[i];
        else
            cin >> l[i] >> r[i];
    }
    SegmentTree Z;
    Z.init(n);

    for (int i = 0; i < q; i++)
    {
        if (Query[i] == 1)
        {
            Z.update(pos[i], x[i]);
        }
        if (Query[i] == 2)
        {
            int Answer = Z.query(l[i], r[i], 1, Z.size + 1, 1);
            cout << Answer << endl;
        }
    }
}