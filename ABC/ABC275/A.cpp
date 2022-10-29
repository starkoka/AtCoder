#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,H=0,ans=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        int h;
        cin>>h;
        if(h>H){
            H=h;
            ans=i;
        }
    }
    cout<<ans<<endl;
}