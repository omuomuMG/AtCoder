#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string fir = "";
    string end = "";
    fir += s[0];
    end += s[2];
    cout << stoi(fir) * stoi(end) << endl;
}