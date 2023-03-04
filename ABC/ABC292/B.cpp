#include <bits/stdc++.h>
using namespace std;


int main(void){
    int n,q;
    cin >> n >> q;
    vector<int> e(n+1,0);
    for(int i=0;i<q;i++){
        int c,x;
        cin >> c >> x;
        if(c==3){
            if(e[x]<2){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            e[x] += c;
        }
    }

}