#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t a=0,b=0,M;
    string Ans="Easy";
    cin>>a>>b;
    if(to_string(a).size()>=to_string(b).size()){M=to_string(b).size();}
    else{M=to_string(a).size();}
    for(int i=0;i<M;i++){
        if(a%10+b%10>=10){Ans="Hard";}
        a/=10;
        b/=10;
    }
    cout<<Ans<<endl;
}