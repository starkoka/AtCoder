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
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"



int main() {
    int n;
    string s;
    cin >> n >> s;
    vi Left(n),Right(n),ans(n);

    rep(i,n){
        if(i==0){
            Left[0] = (s[i]=='E' ? 0 : 1);
        }
        else{
            Left[i] = Left[i-1] + (s[i]=='E' ? 0 : 1);
        }
    }

    for(int i=n-1; i>=0; i--){
        if(i==n-1){
            Right[n-1] = (s[i]=='W' ? 0 : 1);
        }
        else{
            Right[i] = Right[i+1] + (s[i]=='W' ? 0 : 1);
        }
    }

    rep(i,n){
        if(i==0){
            ans[i] = Right[i+1];
        }
        else if(i==n-1){
            ans[i] = Left[i-1];
        }
        else{
            ans[i] = Right[i+1] + Left[i-1];
        }
    }
    vsort(ans);
    cout << ans[0] << nl;
}
