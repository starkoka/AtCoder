#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,X=0;
    cin>>N>>X;
    int M=X;
    vector<int> list(N);
    for(int i=0;i<N;i++){
        cin>>list.at(i);
    }
    vector<int> Ans_list{X};
    M=list.at(M-1);
    while(*find(Ans_list.begin(), Ans_list.end(), M) != M){
        Ans_list.push_back(M);
        M=list.at(M-1);
    }
    cout<<Ans_list.size()<<endl;
}