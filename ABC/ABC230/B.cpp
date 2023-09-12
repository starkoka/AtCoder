#include <bits/stdc++.h>
using namespace std;

int main() {
    string S,Ans="Yes";
    cin>>S;
    int size=S.size();
    if(size>1){
        char M=S[0],M2=S[1];
        if(M==M2 && M=='o'){Ans="No";}
        for(int i=2;i<size;i++){
            if(S[i]==M2 && S[i]=='o'){Ans="No";}
            else if(S[i]==M2 && S[i]==M && S[i]=='x'){Ans="No";}
            if(i<size){if(S[i]=='x' && M2=='o'&& S[i+1]=='o'){Ans="No";}}
            M=M2;
            M2=S[i];
        }
    }
    cout<<Ans<<endl;
}