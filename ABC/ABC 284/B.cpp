#include <bits/stdc++.h>
using namespace std;


int main(void){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,ans=0;
        cin >> n;
        for(int j=0; j<n;j++){
            int test;
            cin >> test;
            if(test%2 == 1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}