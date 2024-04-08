#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
	ll n, q;
	cin >> n >> q;

	int x, y, command;
	map<ll, set<ll>> card;	   // cardiが入っている箱の番号を保持
	map<ll, multiset<ll>> box; // boxiに入っているカードを保持
	for (int i = 0; i < q; i++)
	{
		cin >> command;
		if (command == 1)
		{
			cin >> x >> y;
			card[x].insert(y);
			box[y].insert(x);
		}
		else if (command == 2)
		{
			cin >> x;
			for (auto temp : box[x])
			{
				cout << temp << " ";
			}
			cout << endl;
		}
		else if (command == 3)
		{
			cin >> x;
			for (auto temp : card[x])
			{
				cout << temp << " ";
			}
			cout << endl;
		}
	}
}