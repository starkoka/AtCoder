#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,A=0,B=0,M=0,M2=0,M3=0,Ans=0;
    cin>>N>>A>>B;
    for(int i=0;i<N;i++){
        M+=1,M2=0;
        M3=M;
        while(M3!=0){
            M2 += M3%10;
            M3 /=10;
        }
        if(M2>=A && B>=M2){Ans+=M;}
    }
    cout<<Ans<<endl;
}