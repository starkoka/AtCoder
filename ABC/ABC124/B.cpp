#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,M=0,Ans=0,H=0;
    cin>>N>>H;
    for(int i=0;i<N;i++){
        if(H>=M){
            Ans+=1;
            M=H;
        }
        cin>>H;
    }
    cout<<Ans<<endl;
}