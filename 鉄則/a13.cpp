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
    int n,k;
    ll ans=0;
    cin >> n >> k;
    vi a(n);
    rep(i,n){
        cin >> a[i];
    }

    int r=0;
    rep(i,n-1){
        while(a[r]-a[i]<=k){
            r++;
            if(r==n)break;
        }
        r--;
        ans += r-i;
    }
    cout << ans << nl;
}