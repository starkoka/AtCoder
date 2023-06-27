#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    vector<vector<char>> list(h,vector<char>(w));
    pair<int,int> upLeft;
    upLeft = make_pair(-1,-1);
    pair<int,int> downRight;

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> list[i][j];
            if(list[i][j] == '#'){
                if(upLeft.first == -1 && upLeft.second == -1){
                    upLeft = make_pair(i,j);
                }
                downRight = make_pair(i,j);
            }
        }
    }

    if(upLeft.first != h && upLeft.second != 0){
        if(list[upLeft.first+1][upLeft.second-1] == '#'){
            upLeft.second -= 1;
        }
    }
    if(downRight.first != 0 && downRight.second != w){
        if(list[downRight.first-1][downRight.second+1] == '#'){
            downRight.second += 1;
        }
    }

    for(int i=upLeft.first;i<=downRight.first;i++){
        for(int j=upLeft.second;j<=downRight.second;j++){
            if(list[i][j] == '.'){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }


}
