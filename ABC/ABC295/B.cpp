#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"
#define LL_MAX 9223372036854775807

int main() {
    int r,c;
    cin >> r >> c;
    vcc vec(r,vc(c));
    map<int,vector<intp>> bom;
    rep(i,0,r){
        rep(j,0,c){
            cin >> vec[i][j];
            if(vec[i][j]>='0' && vec[i][j]<='9'){
                intp xy = make_pair(i,j);
                bom[vec[i][j]-'0'].push_back(xy);
            }
        }
    }

    rep(i,1,10){
        rep(j,0,bom[i].size()){
            int power = i;
            vec[bom[i][j].F][bom[i][j].S] = '.';
            rep(k,2,power+2){
                intp now = make_pair(bom[i][j].F,bom[i][j].S-(k-1));
                rep(l,0,k-1){
                    if(now.F>=0 && now.F<r && now.S>=0 && now.S<c){
                        vec[now.F][now.S]='.';
                    }
                    now = make_pair(now.F-1,now.S+1);
                }
                rep(l,0,k-1){
                    if(now.F>=0 && now.F<r && now.S>=0 && now.S<c){
                        vec[now.F][now.S]='.';
                    }
                    now = make_pair(now.F+1,now.S+1);
                }
                rep(l,0,k-1){
                    if(now.F>=0 && now.F<r && now.S>=0 && now.S<c){
                        vec[now.F][now.S]='.';
                    }
                    now = make_pair(now.F+1,now.S-1);
                }
                rep(l,0,k-1){
                    if(now.F>=0 && now.F<r && now.S>=0 && now.S<c){
                        vec[now.F][now.S]='.';
                    }
                    now = make_pair(now.F-1,now.S-1);
                }
            }
        }
    }

    rep(i,0,r){
        rep(j,0,c){
            cout << vec[i][j];
        }
        cout << nl;
    }
    return 0;
}