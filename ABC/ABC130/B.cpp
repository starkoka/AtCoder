#include <bits/stdc++.h>
using namespace std;
int main(){
    int N=0,X=0,Ans=1,M=0,I=0;
    cin>>N>>X;
    for(int i=0;i<N;i++){
        cin>>I;
        M+=I;
        if(M<=X){Ans+=1;}
    }
    cout<<Ans<<endl;
}