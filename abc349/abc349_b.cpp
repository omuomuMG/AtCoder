#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	string s;
	cin >> s;
	map<char, int> mp;

	for (int i = 0; i < s.size(); i++)
	{
		mp[s[i]]++;
	}
	vector<ll> count((int)s.size() + 10, 0);
	for (auto [key, value] : mp)
	{
		count[value]++;
	}
	for (int i = 0; i < s.size() + 1; i++)
	{
		if (count[i] != 2 && count[i] != 0)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}