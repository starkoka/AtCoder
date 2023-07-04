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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(){
    vcc list(4,vc(4));
    rep(i,4){
        rep(j,4){
            cin pp list[i][j];
        }
    }

    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            cout qq list[i][j];
            if(j>=1)cout qq " ";
        }
        cout qq nl;
    }
}