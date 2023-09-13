#include <bits/stdc++.h>
using namespace std;
int main(void){
    int h,w;
    cin>>h>>w;
    vector<vector<char> > list(h,vector<char>(w));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>list.at(i).at(j);
        }
    }

    for(int i=0;i<w;i++){
        int x=0;
        for(int j=0;j<h;j++){
            if(list.at(j).at(i)=='#'){
                x++;
            }
        }
        cout<<x<<' ';
    }
    cout<<endl;
}
