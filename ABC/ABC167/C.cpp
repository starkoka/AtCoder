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
    int n,m,x,ans=10000000;
    cin >> n >> m >> x;
    vi c(n);
    vii a(n,vi(m));

    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }

    brep(i,n){
        bitset<12> b(i);
        vi check(n,0);
        int price=0;
        rep(j,n){
            if(b.test(j)){
                price += c[j];
                rep(k,m){
                    check[k]+=a[j][k];
                }
            }
        }
        bool flag = true;
        rep(j,m){
            if(check[j]<x){
                flag = false;
                break;
            }
        }
        if(flag && price<ans){
            ans=price;
        }
    }

    cout << (ans==10000000 ? -1 : ans) << nl;
}