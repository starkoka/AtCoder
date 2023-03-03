#include <bits/stdc++.h>
using namespace std;
int main() {
    int N=0,Y=0,A=-1,B=-1,C=-1;
    cin>>N>>Y;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=N;j++){
            int c=N-i-j;
            if(i*10000+j*5000+c*1000==Y && c>=0){A=i,B=j,C=c;}
        }
    }
    cout<<A<<" "<<B<<" "<<C<<endl;
}