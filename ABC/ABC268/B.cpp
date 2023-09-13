#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s,t;
    cin>>s>>t;
    if(s.length()>t.length()){
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<s.length();i++){
        if(t[i]!=s[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}

