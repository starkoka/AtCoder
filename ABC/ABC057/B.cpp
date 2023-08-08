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



int main(){
    int n,m;
    cin >> n >> m;
    vector<intp> ab(n);
    rep(i,n){
        int a,b;
        cin >> a >> b;
        ab[i]=make_pair(a,b);
    }

    vector<intp> cd(m);
    rep(i,m){
        int c,d;
        cin >> c >> d;
        cd[i]=make_pair(c,d);
    }

    rep(i,n){
        intp ans={2000000001,0};
        rep(j,m){
            int d = abs(ab[i].F-cd[j].F) + abs(ab[i].S-cd[j].S);
            if(ans.F>d){
                ans.F=d;
                ans.S=j+1;
            }
        }
        cout << ans.S << nl;
    }
}