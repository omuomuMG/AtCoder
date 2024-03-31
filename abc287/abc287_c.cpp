#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

struct UnionFind
{
    vector<ll> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

    UnionFind(ll N) : par(N)
    { // 最初は全てが根であるとして初期化
        for (ll i = 0; i < N; i++)
            par[i] = i;
    }

    ll root(ll x)
    { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y)
    {                    // xとyの木を併合
        ll rx = root(x); // xの根をrx
        ll ry = root(y); // yの根をry
        if (rx == ry)
            return;   // xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; // xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }

    bool same(ll x, ll y)
    { // 2つのデータx, yが属する木が同じならtrueを返す
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }
    // グループ構造の詳細を取得する関数
    ll groups()
    {
        // member[v] := 要素 v をリーダーとするグループ
        vector<vector<ll>> member(par.size());
        for (ll v = 0; v < (ll)par.size(); ++v)
        {
            member[root(v)].push_back(v);
        }

        // 配列 member の空の部分を削除したものを作る
        vector<vector<ll>> res;
        for (ll v = 0; v < (ll)par.size(); ++v)
        {
            if (!member[v].empty())
                res.push_back(member[v]);
        }
        return (ll)res.size();
    }
    ll size(ll x)
    {
        return -par[root(x)];
    }
};

int main()
{
    ll n, m;
    cin >> n >> m;

    UnionFind tree(n);
    map<ll, int> mp;
    bool state = true;
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        // x--,y--とか忘れずに！！
        cin >> u >> v;
        u--, v--;
        if (tree.root(u) != tree.root(v))
        {
            tree.unite(u, v);
            mp[u]++;
            mp[v]++;
            if (mp[u] > 2 || mp[v] > 2)
            {
                state = false;
            }
        }
        else
        {
            state = false;
            tree.unite(u, v);
        }
    }
    if (state && tree.groups() == 1 && n - m == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
