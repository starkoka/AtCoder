#include <bits/stdc++.h>
using namespace std;

int main(){
    int N=0,A=0,B=0;
    cin>>N>>A>>B;
    if (N*A<B){
        cout<<N*A;
    }
    else{
        cout<<B;
    }
}