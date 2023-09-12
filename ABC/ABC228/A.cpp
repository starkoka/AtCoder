#include <bits/stdc++.h>
using namespace std;

int main() {
    int S=0,T=0,X=0,M=0;
    string Ans="No";
    cin>>S>>T>>X;
    M=S;
    for(int i=0;i<24;i++){
        if(M==X){Ans="Yes";}
        M+=1;
        if(M==24){M=0;}
        if(M==T){break;}
    }
    if(Ans=="Yes"){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}