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
    int n,q;
    cin >> n >> q;
    vi list(n,0);

    rep(i,q){
        int l,r,t;
        cin >> l >> r >> t;
        l--;r--;
        for(int j=l;j<=r;j++){
            list[j]=t;
        }
    }

    rep(i,n){
        cout << list[i] << nl;
    }
}