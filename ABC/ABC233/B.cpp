#include <bits/stdc++.h>
using namespace std;

int main() {
    int L=0,R=0;
    string S;
    cin>>L>>R>>S;
    int Ssize=S.size();
    vector<char> list(Ssize);
    vector<char> Ans(Ssize);
    for(int i=0;i<Ssize;i++){
        list.at(i)=S[i];
    }
    for(int i=0;i<L-1;i++){
        Ans.at(i)=list.at(i);
    }
    for(int i=0;i+L-1<R;i++){
        Ans.at(R-1-i)=list.at(i+L-1);
    }
    for(int i=R;i<Ssize;i++){
        Ans.at(i)=list.at(i);
    }
    for(int i=0;i<Ans.size();i++){
        cout<<Ans.at(i);
    }
    cout<<endl;
}