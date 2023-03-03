#include <bits/stdc++.h>
using namespace std;
int main() {
    int S=0,Ans=0;
    cin>>S;
    if(S>=100){Ans+=1;S-=100;}
    if(S>=10){Ans+=1;S-=10;}
    if(S==1){Ans+=1;}
    cout<<Ans<<endl;
}