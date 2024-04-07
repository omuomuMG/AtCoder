#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n;
	cin >> n;
	vector<ll> a(n);
	map<ll, ll> mp;
	ll next;
	int count = 1;
	ll start;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == -1)
		{
			start = i + 1;
			next = i + 1;
		}
		mp[a[i]] = i + 1;
	}
	cout << start << " ";
	while (count < n)
	{
		next = mp[next];
		count++;
		cout << next << " ";
	}
}