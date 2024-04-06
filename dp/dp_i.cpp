#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<double> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	vector<vector<double>> dp(n + 1, vector<double>(n + 1, 0));
	dp[0][0] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			dp[i + 1][j + 1] += dp[i][j] * p[i];   // 表が出た時
			dp[i + 1][j] += dp[i][j] * (1 - p[i]); // 裏が出た時
		}
	}
	double sum = 0;
	for (int i = n / 2 + 1; i <= n; i++)
	{
		sum += dp[n][i];
	}
	cout << fixed << setprecision(10) << sum;
}