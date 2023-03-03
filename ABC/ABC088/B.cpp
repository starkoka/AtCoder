#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,Ans=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            Ans += a[i];
        }
        else{
            Ans -= a[i];
        }
    }
    cout << Ans << endl;
}