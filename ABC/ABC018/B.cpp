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
#define qq <<
#define pp >>



int main(){
    string s;
    int n;
    cin pp s pp n;

    rep(i,n){
        int l,r;
        string t = s;
        cin pp l pp r;
        for(int j=l-1;j<r;++j){
            int p = j-(l-1);
            t[j]=s[r-p-1];
        }
        s = t;
    }

    cout qq s qq nl;

}