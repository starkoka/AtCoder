#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s;
    cin>>n>>s;
    for(int i=0; i<n-1; i++){
        if(s[i]=='n' && s[i+1]=='a'){
            cout<<"ny";
        }
        else{
            cout<<s[i];
        }
    }
    cout<<s[n-1]<<endl;
}