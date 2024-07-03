#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

unordered_map<ll, vector<ll>> mp; // [key, value]: [親, 子]
vector<ll> ans;

void DFS(ll current, ll parent) {
    for (ll child : mp[current]) {
        if (child == parent) continue; // 親への逆流を防ぐ
        ans[child] += ans[current];
        DFS(child, current);
    }
}

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n - 1), b(n - 1);
    ans.resize(n, 0);

    // 木の構築
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        mp[a[i]].push_back(b[i]);
        mp[b[i]].push_back(a[i]);
    }

    // 操作の集計
    ll p, x;
    for (int i = 0; i < q; i++) {
        cin >> p >> x;
        ans[--p] += x;
    }

    // 根からDFSを行い、部分木への影響を伝播させる
    DFS(0, -1);

    // 結果の出力
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
