#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> list(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        list[i][i] = 1;
    }
    for(int i=0;i<m;i++){
        int a;
        cin >> a ;
        for(int j=1;j<n;j++){
            int b;
            cin >> b;
            list[a-1][b-1] = 1;
            list[b-1][a-1] = 1;
            a = b;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(list[i][j] == 0){
                ans ++;
            }
        }
    }

    cout << ans/2 << endl;
}