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
#define yyy cout qq "Yes" qq nl;return 0;
#define nnn cout qq "No" qq nl;

int main(){
    int n,k,ans;
    ll all=0;
    cin pp n pp k;

    vector<pair<int,int>> l(n);
    rep(i,n){
        int a,b;
        cin pp a pp b;
        l[i] = make_pair(a,b);
        all += b;
    }
    ll now = all;
    vsort(l);

    if(now <= k){
        cout qq 1 qq nl;
        return 0;
    }

    for(int i=0;now>k;i++){
        ans = l[i].F+1;
        now -= l[i].S;
    }
    cout qq ans;
}