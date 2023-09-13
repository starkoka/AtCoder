#include <bits/stdc++.h>
using namespace std;

int main(void){
    int r,c,x,y;
    cin>>r>>c;
    if(r==1 && c==1)x=1;
    if(r==1 && c==2)x=2;
    if(r==2 && c==1)x=3;
    if(r==2 && c==2)x=4;
    for(int i=0;i<x;i++){
        cin>>y;
    }
    cout<<y<<endl;
}