#include <bits/stdc++.h>
using namespace std;
int main() {
    double  N=0,Ans=0;
    cin>>N;
    vector<double> x(N);
    vector<double> y(N);
    for(int i=0;i<N;i++){
        cin>>x.at(i);
        cin>>y.at(i);
    }
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            double m=(y.at(j)-y.at(i))/(x.at(j)-x.at(i));
            if(m>=-1 && m<=1){Ans+=1;}
        }
    }
    cout<<Ans<<endl;
}