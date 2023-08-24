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
    vi ans;
    uset check;
    int a,b,k;
    cin >> a >> b >> k;
    rep(i,min(k,b-a+1)){
        if(check.count(a+i)==0){
            ans.push_back(a+i);
            check.insert(a+i);
        }
        if(check.count(b-i)==0){
            ans.push_back(b-i);
            check.insert(b-i);
        }
    }
    vsort(ans);
    rep(i,ans.size()){
        cout << ans[i] << nl;
    }
}
