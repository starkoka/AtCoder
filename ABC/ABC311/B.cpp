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
    int n,d;
    cin pp n pp d;
    vi list(d,0);
    rep(i,n){
        string s;
        cin pp s;
        rep(j,d){
            if(s[j]=='x'){
                list[j]++;
            }
        }
    }

    int ans = 0,now=0;
    rep(i,d){
        if(list[i]==0){
            now++;
        }
        else{
            if(ans < now){
                ans = now;
            }
            now = 0;
        }
    }
    if(ans < now){
        ans = now;
    }
    now = 0;

    cout qq ans qq nl;
}