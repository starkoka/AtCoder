#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int N=0,Ans=0;
    cin>>N;
    vector<int> list(N);
    for(int i=0;i<N;i++){
        cin>>list.at(i);
    }
    int a=0,b=0;
    vector<int> Xlist;
    while(b<144){
        b += 1;
        while(4*a*b+3*a+3*b<1000){
            a +=1;
            Xlist.push_back(4*a*b+3*a+3*b);
        }
        a=0;
    }
    for(int i=0;i<list.size();i++){
        if (*find(Xlist.begin(), Xlist.end(), list.at(i)) != list.at(i)) {
            Ans+=1;
        }
    }
    cout<<Ans<<endl;

}