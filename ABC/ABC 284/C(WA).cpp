//WA×12、TLE×3
#include <bits/stdc++.h>
using namespace std;

void dfs(int v,vector<int> &p,vector<vector<int>> &q,int &ans){
    p[v] = ans;
    if(q[v].size() == 0){
        return ;
    }
    else{
        for(size_t i = 0; i < q[v].size(); i++){
            dfs(q[v][i],p,q,ans);
        }
    }
}


int main(void){
    int n,m,ans=0;
    cin>>n>>m;
    vector<int> p(n,0);
    vector<vector<int>> q(n,vector<int>());
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        if(x>y){
            q[y-1].push_back(x-1);
        }
        else{
            q[x-1].push_back(y-1);
        }

    }

    for(int i=0;i<n;i++){
        if(p[i] == 0){
            ans++;
            dfs(i,p,q,ans);
        }
    }
    cout<<ans;

}