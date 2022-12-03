#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,s,x=0;
    cin>>n;
    for(int i=0; i<n-1; i++){
        cin>>s;
        cout<<s-x<<" ";
        x=s;
    }
    cin>>s;
    cout<<s-x<<endl;
}