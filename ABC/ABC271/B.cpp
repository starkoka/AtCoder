#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n,q;
    cin>>n>>q;
    vector<vector<int> > v(n,vector<int>(1));

    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        for(int j=0;j<l;j++){
            if(j==0){
                cin>>v.at(i).at(0);
            }
            else{
                int x;
                cin>>x;
                v.at(i).push_back(x);
            }
        }
    }
    for(int i=0;i<q;i++){
        int s,t;
        cin>>s>>t;
        cout<<v.at(s-1).at(t-1)<<endl;
    }

    return 0;
}