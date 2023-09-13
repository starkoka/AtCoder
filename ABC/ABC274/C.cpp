#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,c,max=0;
    cin>>n;
    vector<int> a(n);
    vector<int> ans(2*n+1);
    for (int i=0; i<n; i++){
        cin>>a[i];
    }

    ans.at(0)=0;
    for(int i=1; i<n+1; i++){
        int x=ans.at(a.at(i-1)-1)+1;
        ans.at(2*i-1)=x;
        ans.at(2*i)=x;
    }

    for(int i=0;i<2*n+1;i++){
        cout<<ans.at(i)<<endl;
    }

}
