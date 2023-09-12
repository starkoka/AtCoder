#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,K=0,M1=0,M2=0,M3=0;
    cin>>N>>K;
    vector<int> point_list(N);
    vector<int> sort_list(N);
    for(int i=0;i<N;i++){
        cin>>M1>>M2>>M3;
        point_list.at(i)=M1+M2+M3;
        sort_list.at(i)=point_list.at(i);
    }
    sort(sort_list.begin(),sort_list.end());
    reverse(sort_list.begin(),sort_list.end());
    for(int i=0;i<N;i++){
        if(point_list.at(i)+300>=sort_list.at(K-1)){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }
}