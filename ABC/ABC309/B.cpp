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

int main(){
    int n;
    cin >> n;
    vcc a(n,vc(n));
    rep(i,n){
        string s;
        cin pp s;
        rep(j,n){
            a[i][j] = s[j];
        }
    }

    char start = a[0][0];

    rep(i,n-1){
        a[i][0] = a[i+1][0];
    }
    rep(i,n-1){
        a[n-1][i] = a[n-1][i+1];
    }
    for(int i=n-1; i>0; i--){
        a[i][n-1] = a[i-1][n-1];
    }
    for(int i=n-1; i>0; i--){
        a[0][i] = a[0][i-1];
    }
    a[0][1] = start;

    rep(i,n){
        rep(j,n){
            cout qq a[i][j];
        }
        cout qq nl;
    }

}