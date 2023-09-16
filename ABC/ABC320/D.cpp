#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<ll,ll>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"
#define LL_MAX 9223372036854775807

uset checked;
map<int,intp> ans;
vector<vector<pair<int,intp>>> vec(200000,vector<pair<int,intp>>(0));

void check(int n,intp now){
    if(checked.count(n)){
        return;
    }
    checked.insert(n);
    rep(i,0,vec[n].size()){
        ans[vec[n][i].F] = make_pair(now.F+vec[n][i].S.F,now.S+vec[n][i].S.S);
        check(vec[n][i].F,make_pair(now.F+vec[n][i].S.F,now.S+vec[n][i].S.S));
    }
}

int main() {
    int n,m;
    cin >> n >> m;

    rep(i,0,m){
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        a--;b--;
        vec[a].emplace_back(b,make_pair(x,y));
        vec[b].emplace_back(a,make_pair(x*-1,y*-1));
    }

    ans[0] = make_pair(0,0);
    check(0,make_pair(0,0));

    rep(i,0,n){
        if(ans.count(i)){
            cout << ans[i].F << " " << ans[i].S << nl;
        }
        else{
            cout << "undecidable" << nl;
        }
    }
}