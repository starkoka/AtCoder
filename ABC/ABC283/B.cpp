#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,q;
    cin >> n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> q;

    for(int i=0;i<q;i++){
        int A,x,k;
        cin >> A;
        if(A == 1){
            cin >> k >> x;
            k -= 1;
            a[k] = x;
        }
        else if(A == 2){
            cin >> k;
            k -= 1;
            cout<<a[k]<<endl;
        }
    }
}