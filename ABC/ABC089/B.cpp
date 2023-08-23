#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0;
    cin>>N;
    string S;
    for(int i=0;i<N;i++){
        cin>>S;
        if(S=="Y"){
            cout<<"Four"<<endl;
            break;
        }

    }
    if(S!="Y"){
        cout<<"Three"<<endl;
    }
}