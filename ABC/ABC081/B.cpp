#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,Ans=0,C=0;
    cin>>N;
    vector<int> list(N);
    for(int i=0;i<N;i++){cin>>list.at(i);}
    while(C==0){
        for(int i=0;i<N;i++){
            if(list.at(i)%2==0){list.at(i) =list.at(i)/2;}
            else{C=1;}
        }
        if(C==0){Ans+=1;}
    }
    cout<<Ans<<endl;
}