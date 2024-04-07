#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<double> x(n), y(n);
	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		double max = -1;
		int num = -1;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			double tempX = (x[i] - x[j]) * (x[i] - x[j]);
			double tempY = (y[i] - y[j]) * (y[i] - y[j]);
			double temp = sqrt((int)tempX + (int)tempY);
			if (max < temp)
			{
				max = temp;
				num = j + 1;
			}
		}
		cout << num << endl;
	}
}