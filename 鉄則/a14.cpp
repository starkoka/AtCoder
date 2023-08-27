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
    int n,k;
    cin >> n >> k;
    vii abcd(4,vi(n));
    rep(i,4){
        rep(j,n){
            cin >> abcd[i][j];
        }
    }

    uset ab,cd;
    vi vec;

    rep(i,n){
        rep(j,n){
            if(!ab.count(abcd[0][i]+abcd[1][j])){
                vec.push_back(abcd[0][i]+abcd[1][j]);
                ab.insert(abcd[0][i]+abcd[1][j]);
            }
        }
    }

    rep(i,n){
        rep(j,n){
            cd.insert(abcd[2][i]+abcd[3][j]);
        }
    }

    rep(i,vec.size()){
        if(cd.count(k-vec[i])){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}
