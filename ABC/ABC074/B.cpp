#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,K=0,X=0,Ans=0;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>X;
        if(K<X){
            Ans+=(X-K)*2;
        }
        else{
            if(K-X>X){
                Ans+=X*2;
            }
            else{
                Ans+=(K-X)*2;
            }
        }
    }
    cout<<Ans<<endl;
}