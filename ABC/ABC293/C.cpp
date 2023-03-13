#include <bits/stdc++.h>
using namespace std;


int tansaku(int &i,int x,int y,int h,int w,vector<int> check,vector<vector<int>> list){

    for(vector<int>::size_type j=0;j<check.size()-1;j++){
        if(list.at(x).at(y) == check.at(j+1)){
            return 0;
        }
    }

    vector<int> newCheck;
    copy(check.begin(),check.end(),back_inserter(newCheck));
    newCheck.push_back(list.at(x).at(y));
    if(x+1 != h){
        tansaku(i,x+1,y,h,w,newCheck,list);
    }
    if(y+1 != w){
        tansaku(i,x,y+1,h,w,newCheck,list);
    }
    if(x+1 == h && y+1 == w){
        i++;
    }
    return 0;
}

int main(void){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> list(h,vector<int>(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> list.at(i).at(j);
        }
    }

    vector<int> check(1,0);
    int c=0;
    tansaku(c,0,0,h,w,check,list);

    cout << c << endl;
    return 0;
}
