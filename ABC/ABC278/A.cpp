#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(void){
    int n,k,c=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(i+1>k){
            cout<<a<<" ";
            c++;
        }
    }
    for(; c<n-1; c++){
        cout<<0<<" ";
    }
    cout<<0<<endl;
}