#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n+1,vector<int>(n+1));
    vector<vector<int>> b(n+1,vector<int>(n+1));
    vector<vector<int>> oa;
    vector<vector<int>> ob;

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i+1][j+1];
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> b[i+1][j+1];
        }
    }

    for(int i = 0; i < 4;i++){
        string ans = "Yes";
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(a[j+1][k+1] == 1){
                    if(b[j+1][k+1] == 1){

                    }
                    else{
                        ans = "No";
                    }
                }
            }
        }
        if(ans == "Yes"){
            cout << ans << endl;
            return 0;
        }

        oa = a;

        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n;k++){
                a[j][k] = oa[n+1-k][j];
            }
        }

    }
    cout << "No" << endl;
    return 0;

}
