#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,p,q,r,s,i;
    cin>>n>>p>>q>>r>>s;
    vector<int> list(n);
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    for(i=0;i<p-1;i++){
        cout<<list[i]<<" "<<endl;
    }
    for(int j=r-1;j<q-p+r;j++){
        cout<<list[j]<<" "<<endl;
        i++;
    }
    for(;i<r-1;i++){
        cout<<list[i]<<" "<<endl;
    }
    for(int j=p-1;j<q;j++){
        cout<<list[j]<<" "<<endl;
        i++;
    }
    for(;i<n;i++){
        cout<<list[i]<<" "<<endl;
    }
}