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
    cin pp s;
    rep(i,s.size()){
        if(s[i]=='c' && i+1!=s.size()){
            if(s[i+1]!='h'){
                cout qq "NO" qq nl;
                return 0;
            }
            else{
                i++;
            }
        }
        else if(s[i]=='o' || s[i]=='k' || s[i]=='u'){}
        else{
            cout qq "NO" qq nl;
            return 0;
        }
    }
    cout qq "YES" qq nl;
}