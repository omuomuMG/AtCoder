#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n;
	cin >> n;
	vector<pair<ll, ll>> A;
	vector<pair<ll, ll>> B;
	ll maxi = 0;
	rep(i, n)
	{
		ll a, b;
		cin >> a >> b;
		A.push_back(make_pair(a, b - a)); // 肩の高さをfirstに、頭の高さをsecondに入れる
		B.push_back(make_pair(b - a, a));
	}

	ll sum_a = 0;
	sort(all(A));
	for (int i = 0; i < n; i++)
	{
		sum_a += A[i].first;
	}
	sum_a += A[n - 1].second;
	// cout << sum_a << endl;

	ll sum_B = 0;
	sort(all(B));
	for (int i = 0; i < n; i++)
	{
		sum_B += B[i].second;
	}
	sum_B += B[n - 1].first;

	cout << max(sum_a, sum_B) << endl; // 答えを出力
	return 0;
}
