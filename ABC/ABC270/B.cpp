#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,z,ans;
    cin>>x>>y>>z;
    if(x>0 && y<0){
        ans=abs(x);
    }
    else if(x<0 && y>0){
        ans=abs(x);
    }
    else{
        if(abs(x)<abs(y)){
            ans=abs(x);
        }
        else if(0<y && y<z){
            ans=-1;
        }
        else if(0>y && y>z){
            ans=-1;
        }
        else{
            ans=abs(z)+abs(x-z);
        }
    }
    cout<<ans<<endl;
    return 0;

    cout<<ans<<endl;
}