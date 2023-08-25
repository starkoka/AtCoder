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
    int n,ans=0;
    string s;
    cin >> n >> s;
    rep(i,n-1){
        uset c,d;
        int count=0;
        rep(j,i+1){
            c.insert(s[j]);
        }
        for(int j=i+1;j<n;j++){
            if(c.count(s[j]) && !d.count(s[j])){
                count++;
                d.insert(s[j]);
            }
        }
        ans = max(ans,count);
    }
    cout << ans << nl;
}
