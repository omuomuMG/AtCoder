#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	string s, t;
	cin >> s >> t;
	int current = 0;
	for (int i = 0; i < t.size(); i++)
	{
		if (current >= s.size())
		{
			break;
		}
		if (s[current] == t[i])
		{
			cout << i + 1 << " ";
			current++;
		}
	}
}