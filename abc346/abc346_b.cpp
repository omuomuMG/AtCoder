#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int w, b;
	cin >> w >> b;
	string bw = "wbwbwwbwbwbw";
	string s = "";
	while (s.size() < 1000)
	{
		s += bw;
	}
	for (int i = 0; i < s.size() - w - b - 10; i++)
	{
		string current = "";
		int W = 0;
		int B = 0;
		for (int j = 0; j < w + b; j++)
		{
			current += s[i + j];
		}
		for (int j = 0; j < current.size(); j++)
		{
			if (current[j] == 'w')
			{
				W++;
			}
			else
			{
				B++;
			}
		}
		if (w == W && B == b)
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}