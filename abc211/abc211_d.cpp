#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n, m;
	cin >> n >> m;
	vector<ll> a(m), b(m);
	vector<vector<ll>> data(n);
	ll mod = 1e9 + 7;
	for (ll i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
		a[i]--, b[i]--;
		data[a[i]].push_back(b[i]);
		data[b[i]].push_back(a[i]);
	}
	vector<ll> dist(n, -1), count(n, 0);
	queue<ll> q;
	q.push(0); // 頂点1から移動する
	count[0] = 1;
	dist[0] = 0;
	while (!q.empty())
	{
		ll from = q.front();
		q.pop();
		for (ll i = 0; i < (ll)data[from].size(); i++)
		{
			ll to = data[from][i];
			if (dist[to] == -1)
			{
				dist[to] = dist[from] + 1;
				count[to] = count[from];
				q.push(to);
			}
			else if (dist[to] == dist[from] + 1)
			{
				count[to] += count[from];
				count[to] %= mod;
			}
		}
	}
	cout << count[n - 1] << endl;
}