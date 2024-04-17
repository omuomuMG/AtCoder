#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
 
int main() {
  double n;
  cin >> n;
  double ans = sqrt(n)*sqrt(n+12800000);
  cout<<  fixed << setprecision(15)<<ans;
}