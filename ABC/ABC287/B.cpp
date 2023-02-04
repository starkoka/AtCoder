#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,ans=0;
    cin>>n>>m;
    vector<string> s(n);
    vector<string> t(m);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<m;i++){
        cin>>t[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(t[j][0]==s[i][3] && t[j][1]==s[i][4] && t[j][2]==s[i][5] ){
                ans++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}