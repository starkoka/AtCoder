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
#define brep(i,n) for(int i=0, i##_len=((1<<n)); i<i##_len; ++i)
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"



int main() {
    int h,w;
    cin >> h >> w;
    vcc list(h,vc(w));
    vii ans(h,vi(w,-1));
    rep(i,h){
        rep(j,w){
            cin >> list[i][j];
        }
    }

    rep(i,h){
        rep(j,w){
            if(list[i][j] != '#'){
                int num=0;
                bool u=false,d=false,l=false,r=false;
                if(i!=0)u=true;
                if(i!=h-1)d=true;
                if(j!=0)l=true;
                if(j!=w-1)r=true;

                if(u){
                    if(list[i-1][j]=='#')num++;
                    if(l){
                        if(list[i-1][j-1]=='#')num++;
                    }
                    if(r){
                        if(list[i-1][j+1]=='#')num++;
                    }
                }
                if(d){
                    if(list[i+1][j]=='#')num++;
                    if(l){
                        if(list[i+1][j-1]=='#')num++;
                    }
                    if(r){
                        if(list[i+1][j+1]=='#')num++;
                    }
                }
                if(l){
                    if(list[i][j-1]=='#')num++;
                }
                if(r){
                    if(list[i][j+1]=='#')num++;
                }
                ans[i][j] = num;
            }
        }
    }

    rep(i,h){
        rep(j,w){
            if(ans[i][j] == -1){
                cout << '#';
            }
            else{
                cout << ans[i][j];
            }
        }
        cout << nl;
    }
}
