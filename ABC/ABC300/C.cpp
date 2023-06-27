#include <bits/stdc++.h>
using namespace std;

int check(int &count ,int i, int j , vector<vector<char>> &list) {
    if(list[i][j] == '#'){
        list[i][j] = '.';
        count++;
        if(i > 0 && j < list[0].size()-1){
            check(count,i-1,j+1,list);
        }
        if(i < list.size()-1 && j < list[0].size()-1){
            check(count,i+1,j+1,list);
        }
        if(j > 0 && i < list.size()-1){
            check(count,i+1,j-1,list);
        }
        if(j > 0 && i > 0){
            check(count,i-1,j-1,list);
        }
        return 0;
    }
    else{
        return 0;
    }

}

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> list(h,vector<char>(w));
    vector<int> ans(min(h,w));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> list[i][j];
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int count=0;
            check(count,i,j,list);
            if(count != 0){
                ans[count/4 - 1]++;
            }
        }
    }

    for(int i=0;i<min(h,w);i++){
        cout << ans[i] << " " ;
    }
    cout << endl;

    return 0;
}