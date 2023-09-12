#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N=0,K=0,A=0;
    cin>>N>>K>>A;
    int Ans=A;
    for(int i=0;i<K-1;i++){
        Ans +=1;
        if(Ans>N){Ans=1;}
    }
    cout<<Ans<<endl;
}