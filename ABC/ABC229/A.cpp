#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2,Ans="No";
    cin>>s1>>s2;
    char ul=s1[0],ur=s1[1],dl=s2[0],dr=s2[1],black='#';
    if(ul==black){
        if(ur==black){
            Ans="Yes";
        }
        else{
            if(dl==black){
                Ans="Yes";
            }
        }
    }
    else{
        if(ur==black){
            if(dr==black){
                Ans="Yes";
            }
        }
        else{Ans="Yes";}
    }
    cout<<Ans<<endl;
}