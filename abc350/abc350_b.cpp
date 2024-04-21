#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int n, q;
	cin >> n >> q;
	vector<int> t(q);
	for (int i = 0; i < q; i++)
	{
		cin >> t[i];
		t[i]--;
	}
	vector<int> a(n, true);
	for (int i = 0; i < q; i++)
	{
		if (a[t[i]] == true)
		{
			a[t[i]] = false;
		}
		else
		{
			a[t[i]] = true;
		}
	}
	ll ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == true)
		{
			ans++;
		}
	}
	cout << ans;
}