#include <bits/stdc++.h>
using namespace std;
int main() {
    int A=0,B=0,C=0,a=-1,b=-1,c=-1,X=0,Ans=0;
    cin>>A>>B>>C>>X;
    for(int i=0;i<A+1;i++){
        a+=1;
        for(int j=0;j<B+1;j++){
            b+=1;
            for(int k=0;k<C+1;k++){
                c+=1;
                if(500*a+100*b+50*c==X){Ans+=1;}
            }
            c=-1;
        }
        b=-1;
    }
    cout<<Ans<<endl;
}