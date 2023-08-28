#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"


int main() {
    int h,w;
    cin >> h >> w;
    vcc list(h,vc(w));
    rep(i,h){
        rep(j,w){
            cin >> list[i][j];
        }
    }

    bool flag = true;
    while(flag){
        flag = false;
        for(int i=0;i<h;i++){
            bool check = true;
            rep(j,w){
                if(list[i][j]!='.'){
                    check = false;
                    break;
                }
            }
            if(check){
                list.erase(list.begin() + i);
                h --;
                flag = true;
            }
        }

        for(int i=0;i<w;i++){
            bool check = true;
            rep(j,h){
                if(list[j][i]!='.'){
                    check = false;
                    break;
                }
            }
            if(check){
                rep(j,h){
                    list[j].erase(list[j].begin() + i);
                }
                w --;
                flag = true;
            }
        }
    }

    rep(i,h){
        rep(j,w){
            cout << list[i][j];
        }
        cout << nl;
    }
}
