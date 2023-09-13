#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,ans=1,a=0;
    vector<int> list(5);
    cin>>n;
    list.at(0)=n;
    for(int i=2;i<=5;i++){
        cin>>n;
        a=0;
        for(int j=0;j<i;j++){
            if(n==list.at(j)){
                a=1;
            }
        }
        if(a==0){
            list.at(i-1)=n;
            ans=ans+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}

