#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string s;
    cin>>n>>s;
    vector<vector<int>> x(s.size()+1,vector<int>(2));
    x.at(0).at(0) = 0;
    x.at(0).at(1) = 0;
    for(int i=1;i<s.size()+1;i++){
        char c = s.at(i-1);
        if(c == 'R'){x.at(i).at(0) = x.at(i-1).at(0)+1;x.at(i).at(1) = x.at(i-1).at(1);}
        else if(c == 'L'){x.at(i).at(0) = x.at(i-1).at(0)-1;x.at(i).at(1) = x.at(i-1).at(1);}
        else if(c == 'U'){x.at(i).at(1) = x.at(i-1).at(1)+1;x.at(i).at(0) = x.at(i-1).at(0);}
        else if(c == 'D'){x.at(i).at(1) = x.at(i-1).at(1)-1;x.at(i).at(0) = x.at(i-1).at(0);}
    }

    vector<int64_t> y(x.size());
    for(int i=0;i<y.size();i++){
        y.at(i) = x.at(i).at(0)*1000000+x.at(i).at(1);
    }
    sort(y.begin(),y.end());
    for(int i=1;i<y.size()-1;i++){
        if(y.at(i)==y.at(i-1)){
            cout<<"Yes"<<endl;return 0;
        }
    }
    cout<<"No"<<endl;
}