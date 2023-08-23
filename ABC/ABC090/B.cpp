#include <bits/stdc++.h>
using namespace std;
int main(){
    int A=0,B=0,N=0,Ans=0;
    string M;
    cin>>A>>B;
    N=A;
    M=to_string(N);
    for(int I=0;I<(B-A+1);I++){
        if(M[0]==M[4] && M[1]==M[3]){Ans+=1;}
        N+=1;
        M=to_string(N);
    }
    cout<<Ans<<endl;
}