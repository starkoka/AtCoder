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
    string ans = "No";
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);

    rep(i,n){
        cin >> a[i];
    }
    rep(i,m){
        cin >> b[i];
    }

    rep(i,n-m+1){
        rep(j,n-m+1){
            bool flag = true;
            rep(k,m){
                rep(l,m){
                    if(a[k+i][l+j]!=b[k][l])flag=false;
                }
            }
            if(flag)ans="Yes";
        }
    }

    cout << ans << nl;
}