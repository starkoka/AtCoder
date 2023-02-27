#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    double ans=0;
    cin>>n;
    int m = n*5;
    vector<double> x(m);
    for(int i=0;i<5*n;i++){
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    for(int i=0;i<m;i++){
        if(i>n-1 && i<=n*4-1){
            ans = ans + x.at(i);
        }
    }
    double l = 3*n;
    cout<<ans/l<<endl;
}