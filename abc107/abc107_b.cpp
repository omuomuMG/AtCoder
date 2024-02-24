#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
using ll = long long;
 
int main() {
    int h,w;
    cin >> h>> w;
    vector<vector<char>> a(h, vector<char>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int>row;
    vector<int>column;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if(a[i][j]=='#')
                break;
            
            if(a[i][j]=='.'&&j==w-1){
                row.push_back(i);
            }
        }
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if(a[j][i]=='#')
                break;
            
            if(a[j][i]=='.'&&j==h-1){
                column.push_back(i);
            }
        }
    }
   sort(all(column));
   sort(all(row));
    for (int i = 0; i < h; i++)
    {
        int state = 0;
        for (int j = 0; j < w; j++)
        {   
            if(binary_search(all(column),j))continue;
            if(binary_search(all(row),i)){state = 1;continue;}
                cout <<a[i][j];
            
            
        }
        if(state!=1)
        cout <<endl;
    }
    
}