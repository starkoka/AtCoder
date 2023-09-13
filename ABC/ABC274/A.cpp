#include <bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,ans;
    cin>>a>>b;
    if(a==b){
        cout<<"1.000"<<endl;
        return 0;
    }
    else if(b==0){
        cout<<"0.000"<<endl;
        return 0;
    }
    b=b*10000;
    ans=b/a+5;
    ans=ans/10;
    cout<<"0."<<ans<<endl;
}
