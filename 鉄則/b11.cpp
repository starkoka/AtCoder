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
    cin >> n;
    vi a(n);
    rep(i,n){
        cin >> a[i];
    }
    vsort(a);

    cin >> q;
    rep(i,q){
        int x;
        cin >> x;
        int ans = lower_bound(a.begin(),a.end(),x) - a.begin();
        cout << ans << nl;
    }
}