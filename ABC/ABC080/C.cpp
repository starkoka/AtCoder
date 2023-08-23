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
    int n,ans=INT_MAX*-1;
    cin >> n;
    vii f(n,vi(10));
    vii p(n,vi(11));
    rep(i,n){
        rep(j,10){
            cin >> f[i][j];
        }
    }
    rep(i,n){
        rep(j,11){
            cin >> p[i][j];
        }
    }

    for(int i = 1; i < 1<<10 ; i++){
        bitset<10> b(i);
        vi num(n,0);
        int result=0;
        rep(j,10){
            if(b.test(j)){
                rep(k,n){
                    if(f[k][j]==1){
                        num[k] += 1;
                    }
                }
            }
        }
        rep(k,n){
            result += p[k][num[k]];
        }
        ans = max(ans,result);
    }
    cout << ans << nl;
}
