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
    int n,d;
    cin >> n;
    vi a(n,0),p(n+1,0),q(n+1,0);
    rep(i,n){
        cin >> a[i];
        p[i] = a[i];
        q[i] = a[i];
    }
    for(int i=1;i<n;i++){
        p[i] = max(p[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        q[i] = max(a[i],q[i+1]);
    }
    cin >> d;
    rep(i,d){
        int l,r;
        cin >> l >> r;
        cout << max(p[l-2],q[r]) << nl;
    }
}