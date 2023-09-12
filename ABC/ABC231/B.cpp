#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0;
    string M;
    cin>>N;
    vector<string> list(N);
    vector<string> SRam;
    vector<int> NRam;
    vector<int> NRam2;
    cin>>M;
    list.at(0)=M;
    SRam.push_back(M);
    NRam.push_back(1);
    NRam2.push_back(1);
    for(int i=1;i<N;i++){
        cin>>M;
        if(*find(list.begin(), list.end(), M) == M){
            for(int j=0;j<SRam.size();j++){
                if(SRam.at(j)==M){NRam.at(j)+=1;NRam2.at(j)+=1;}
            }
        }
        else{
            SRam.push_back(M);
            NRam.push_back(1);
            NRam2.push_back(1);
        }
        list.at(i)=M;
    }
    sort(NRam2.begin(),NRam2.end());
    reverse(NRam2.begin(),NRam2.end());
    for(int i=0;i<NRam.size();i++){
        if(NRam2.at(0)==NRam.at(i)){cout<<SRam.at(i)<<endl;}
    }
}