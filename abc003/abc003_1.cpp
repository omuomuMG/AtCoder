#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
 
int main() {
    int n;
    cin >> n;  

    double ans = 0;
    double temp;
    for (int i = 10000; i <= n*10000; i+=10000)
    {
        temp = 1.0/n;
        ans+=(1.0/n)*i;
     //   cout <<temp<<endl;
    }
    
    cout <<ans;
}