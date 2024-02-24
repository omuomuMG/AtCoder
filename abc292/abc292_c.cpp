#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
 
int main() {
    int n;
    cin >> n;
    ll ans = 0;
    /*
    ABの値をX,CDの値をYとすると
    X+Y=N
    Y=N-X
    */
    for (int i = 0; i < n; i++)
    {
        int X=i,Y=n-i;
        ll x=0,y=0;
        for (int j = 1; j*j <= X; j++)
        {
            if(X%j==0){
                x++;
                if(X!=j*j){x++;}
            }
        }
        for (int j = 1; j*j <= Y; j++)
        {
            if(Y%j==0){
                y++;
                if(Y!=j*j)y++;
            }
        }
      ans += x * y;

    }

    cout <<ans;
    return 0;
}