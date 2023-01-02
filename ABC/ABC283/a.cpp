#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,m,ans=1;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        ans = ans * n;
    }
    cout<<ans<<endl;
}