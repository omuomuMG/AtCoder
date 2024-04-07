#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
inline void print() { cout << endl; }
template <typename T, typename... U>
inline void print(const T &t, const U &...u)
{
	cout << t;
	if (sizeof...(u))
		cout << " ";
	print(u...);
}

int main()
{
	string s;
	cin >> s;
	map<char, int> mp;
	bool state = true;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i != s.size() - 1)
		{
			if ((s[i + 1] - s[i] == 1) || (s[i] == '9' && s[i + 1] == '0'))
			{
				count++;
			}
		}
		mp[s[i]]++;
	}
	if (mp.size() == 1 || count > 2)
	{
		print("Weak");
	}
	else
	{
		print("Strong");
	}
}