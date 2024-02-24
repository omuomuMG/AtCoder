#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll ans = 0;
    vector<int> circle, noneList;

    for (int i = 0; i < 10; i++)
    {
        if (s[i] == 'o')
            circle.push_back(i);
        else if (s[i] == 'x')
            noneList.push_back(i);
    }

    int circleLen = circle.size();
    int noneListLen = noneList.size();
    string current = "";
    bool state = false;

    for (int i = 0; i < 10000; i++)
    {

        state = false;
        current = "";
        if (i < 10)
        {
            current += "000";
        }
        else if (i < 100)
        {
            current += "00";
        }
        else if (i < 1000)
        {
            current += "0";
        }

        current += to_string(i);
        for (int j = 0; j < circleLen; j++)
        {
            if (current.find(to_string(circle[j])) == std::string::npos)
            {
                //  cout << "a";
                state = true;
                break;
            }
        }
        if (state == true)
        {
            continue;
        }
        for (int j = 0; j < noneListLen; j++)
        {
            if (current.find(to_string(noneList[j])) != std::string::npos)
            {
                //  cout << "b";
                state = true;
                break;
            }
        }
        if (state == false)
        {
            ans++;
        }
    }
    cout << ans;
}