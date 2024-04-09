#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n, k;
	cin >> n >> k;
	ll a, b;
	vector<pair<ll, ll>> pr;
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		sum += b;
		pr.push_back(pair(a, b));
	}
	sort(all(pr));
	if (sum <= k)
	{
		cout << 1;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		sum -= pr[i].second;
		if (sum <= k)
		{
			cout << pr[i].first + 1;
			return 0;
		}
	}
}