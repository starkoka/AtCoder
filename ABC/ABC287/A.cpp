#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,a=0,m;
    cin >> n;
    m = n/2;
    for(int i=0; i<n; i++){
        string S;
        cin >> S;
        if(S == "For"){
            a++;
        }
        if(a>m){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}