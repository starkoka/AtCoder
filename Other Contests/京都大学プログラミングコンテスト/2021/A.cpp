#include <bits/stdc++.h>
using namespace std;

int main() {
    int N=0,T=0;
    cin >> N;
    vector<int> S(N);

    for (int i = 0; i < N ; i++){
        cin >> S.at(i);
    }
    cin >> T;
    sort(S.begin(),S.end());
    int ans = S.at(N-1) / T + 1,total = ans,M=S.at(0),M2=-1,exist=0;

    for(int i=0;i<ans-1;i++){
        exist=0;
        while(M<=T*(i+1)){
            M2+=1;
            M=S.at(M2);
            exist=1;
        }

        if(exist==0){total-=1;}
    }
    cout << total << endl;
}