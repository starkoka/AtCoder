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
        rep(i,h){
            bool check = true;
            char c = list[i][0];
            rep(j,w-1){
                if(list[i][j+1]!=c){
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

        rep(i,w){
            bool check = true;
            char c = list[0][i];
            rep(j,h-1){
                if(list[j+1][i]!=c){
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
