#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> list(h,vector<char>(w,'.'));

    for(int i = 0; i < h; i++){
        int t=0;
        for(int j = 0; j < w; j++){
            cin >> list[i][j];
            if(list[i][j] == 'T'){
                t++;
            }
            else{
                t = 0;
            }

            if(t == 2){
                list[i][j] = 'C';
                list[i][j-1] = 'P';
                t = 0;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << list[i][j];
        }
        cout << endl;
    }

}
