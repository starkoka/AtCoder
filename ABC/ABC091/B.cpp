#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x=0,ans=0;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++) {
        cin>>s[i];
    }
    cin>>m;
    vector<string> t(m);
    for(int i=0;i<m;i++) {
        cin>>t[i];
    }

    for(int i=0;i<n;i++) {
        x=0;
        for(int j=0;j<n;j++) {
            if(s[i]==s[j]) {
                x++;
            }
        }
        for(int j=0;j<m;j++) {
            if(s[i]==t[j]) {
                x-=1;
            }
        }
        ans=max(x,ans);
    }
    cout<<ans<<endl;
}