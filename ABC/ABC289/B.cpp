#include <bits/stdc++.h>
using namespace std;

int output(int &i,vector<vector<int>> &list,int k){
    if(list[k].size()==0){
        cout << k+1 << " ";
        return 0;
    }
    else{
        if(list[k][list[k].size()-1]>=k){
            output(i,list,list[k][list[k].size()-1]);
            cout << k+1 << " ";
            i++;
            return 0;
        }
        else{
            cout << k+1 << " ";
            return 0;
        }
    }
}

int main(void){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> list(n,vector<int>());
    vector<int> check(n);
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        list[x-1].push_back(x);
        list[x].push_back(x-1);
    }

    for(int i=0;i<n;i++){
        output(i,list,i);
    }

    return 0;
}