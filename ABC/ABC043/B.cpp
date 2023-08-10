#include <bits/stdc++.h>
using namespace std;

int main(){
    string S,Ans="";
    cin>>S;
    for(int i=0;i<S.size();i++){
        if (S[i]=='1'){
            Ans=Ans+'1';
        }
        if (S[i]=='0'){
            Ans=Ans+'0';
        }
        if (S[i]=='B'){
            Ans=Ans.substr(0,Ans.size()-1);
        }
    }
    cout<<Ans<<endl;
}