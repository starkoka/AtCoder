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
    cin >> n;
    vi t(n);
    rep(i,n){
        cin >> t[i];
    }
    cin >> m;

    rep(i,m){
        int ans=0,p,x;
        cin >> p >> x;
        rep(j,n){
            if(j+1==p){
                ans += x;
            }
            else{
                ans += t[j];
            }
        }
        cout << ans << nl;
    }

}