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
    int n,x=0,ans=0;
    string s;
    cin >> n >> s;
    rep(i,n){
        if(s[i]=='I'){
            x++;
        }
        else{
            x--;
        }
        ans = max(ans,x);
    }

    cout << ans << nl;

}