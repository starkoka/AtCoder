#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n;
    cin >> n;
    vector<string> list(n);
    for(int i=0; i<n; i++){
        cin>>list[i];
    }
    for(int i=0; i<n; i++){
        cout<<list[n-i-1]<<endl;
    }
}