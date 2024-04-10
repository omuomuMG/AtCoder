#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int n, x;
	cin >> n >> x;
	string s = "";
	char alpahbet = 'A';
	while (s.size() < x)
	{
		for (int i = 0; i < n; i++)
		{
			s += alpahbet;
		}
		alpahbet = (char)(alpahbet + 1);
	}
	cout << s[x - 1];
}