#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>> a(h,vector<char>(w));
    vector<vector<char>> b(h,vector<char>(w));
    vector<char> mw(w);

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> b[i][j];
        }
    }

    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            if(a == b){
                cout << "Yes" << endl;
                return 0;
            }
            mw = a[a.size()-1];
            for(int k=0;k<a.size()-1;k++){
                a[a.size()-1-k] = a[a.size()-2-k];
            }
            a[0] = mw;
        }

        for(int k=0;k<h;k++){
            char m = a[k][w-1];
            for(int l=0;l<w-1;l++){
                a[k][w-l-1] = a[k][w-l-2];
            }
            a[k][0] = m;
        }


    }

    cout << "No" << endl;


}
