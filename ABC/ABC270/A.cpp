#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,ans=0;
    cin >> a >> b;

    if(a%2==1 || b%2==1){
        ans++;
    }
    if(a==6 || b==6 || a==2 || b==2 ||a==3 || b==3 || a==7 || b==7 ){
        ans+=2;
    }
    if(a>=4 || b>=4){
        ans+=4;
    }
    cout<<ans<<endl;
    return 0;
}