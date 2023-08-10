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
    ll n,k,ans = 0;
    cin >> n >> k;
    vector<ll> list(n+1,0);
    rep(i,n){
        ll a;
        cin >> a;
        list[i+1] = a + list[i];
    }

    rep(i,n-k+1){
        ans += (list[i+k]-list[i]);
    }

    cout << ans << nl;

}