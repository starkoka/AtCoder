#include <bits/stdc++.h>
using namespace std;


int main(void){
    string s;
    cin >>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0'){
            cout <<'1';
        }
        else{
            cout <<'0';
        }
    }
    cout<<endl;
}