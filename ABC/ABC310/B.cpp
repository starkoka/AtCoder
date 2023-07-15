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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(){
    int n,m;
    cin pp n pp m;
    vector<intp> pc(n);
    vii f(n,vi(1));

    rep(i,n){
        int p,c;
        cin pp p pp c;
        pc[i] = make_pair(p,c);
        rep(j,c){
            if(j==0){
                cin pp f[i][0];
            }
            else{
                int F;
                cin pp F;
                f[i].push_back(F);
            }
        }
    }

    rep(i,n){
        rep(j,n){
            if(i==j || pc[i].F < pc[j].F){}
            else{
                int m=0;
                rep(k,pc[i].S){
                    while(f[i][k] != f[j][m]){
                        m++;
                        if(m==pc[j].S)goto end;
                    }
                }
                if(pc[i].F > pc[j].F || f[i].size() < f[j].size()){
                    cout qq "Yes" qq nl;
                    return 0;
                }
                end:
                int a;
            }
        }
    }
    cout qq "No" qq nl;
    return 0;
}