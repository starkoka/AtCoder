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
    string s;
    cin pp n pp s;
    if(s[0]!=s[n-1]){
        cout qq 1 qq nl;
        return 0;
    }
    rep(i,n-2){
        if(s[i+1]!=s[0] && s[i+2]!= s[n-1]){
            cout qq 2 qq nl;
            return 0;
        }
    }
    cout qq -1 qq nl;
}