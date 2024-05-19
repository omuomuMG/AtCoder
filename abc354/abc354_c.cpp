#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    ll n;
    cin >> n;

    vector<pair<ll, pair<ll, ll>>> cards;

    for (int i = 0; i < n; ++i)
    {
        ll strength, cost;
        cin >> strength >> cost;
        cards.push_back({strength, {cost, i + 1}});
    }

    sort(all(cards), greater<pair<ll, pair<ll, ll>>>());

    vector<ll> remaining_cards;
    ll min_cost = LLONG_MAX;

    for (const auto &card : cards)
    {
        ll strength = card.first;
        ll cost = card.second.first;
        ll index = card.second.second;

        if (cost < min_cost)
        {
            remaining_cards.push_back(index);
            min_cost = cost;
        }
    }
    sort(all(remaining_cards));
    cout << remaining_cards.size() << endl;
    for (int i = 0; i < (ll)remaining_cards.size(); i++)
    {
        cout << remaining_cards[i] << " ";
    }

    return 0;
}
