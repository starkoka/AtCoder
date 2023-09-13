#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    vector<vector<int>> list(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                cout<<"1"<<" ";
                list.at(i).at(j)=1;
            }
            else {
                cout << list.at(i - 1).at(j - 1) + list.at(i-1).at(j )<<" ";
                list.at(i).at(j) = list.at(i - 1).at(j - 1) + list.at(i-1).at(j);
            }
        }
        cout<<endl;
    }
}