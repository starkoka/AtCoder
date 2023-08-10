#include <bits/stdc++.h>
using namespace std;
int main() {
    int A=0,B=0,C=0,K=0;
    string Ans="No";
    cin>>A>>B>>C>>K;
    if(A<B && B<C){Ans="Yes";K=0;}
    while(K>0){
        if(A>=B){B*=2;}
        else{C*=2;}
        K-=1;
        if(A<B && B<C && K>=0){Ans="Yes";break;}
    }
    cout<<Ans<<endl;
} 