#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;


int main()
{
 int n;
 cin >> n;
 vector<int>a(n);
 map<int, int> num;
 int ans = -1;
 int max_num = -1;
 for (int i = 0; i < n; i++)
 {
    cin >> a[i];
    num[a[i]]++;
 }
 for (int i = 0; i < n; i++)
 {
    if(num[a[i]]==1&&max_num < a[i]){ans=i+1;max_num = a[i];}
 }
 cout << ans;

 
}