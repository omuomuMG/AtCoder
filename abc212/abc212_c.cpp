#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (ll i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n, m;
	cin >> n >> m;
	vector<ll> a(n), b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	sort(all(a));
	sort(all(b));
	ll ans = INFINITY;

	for (ll i = 0; i < m; i++)
	{
		ll itr = lower_bound(all(a), b[i]) - a.begin();
		ans = min(abs(a[itr] - b[i]), ans);
		if (itr >= 1)
			ans = min(abs(a[itr - 1] - b[i]), ans);
	}
	cout << ans;
}