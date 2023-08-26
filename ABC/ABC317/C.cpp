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

vector<vector<intp>> vec(10,vector<intp>(0));
vector<vector<ll>> ans(10,vector<ll>(10,INT_MAX*-1));
int n,m,checking;

void check(int now,uset point,ll all){
    point.insert(now);
    ans[checking][now] = max(ans[checking][now],all);
    for(int i=0;i<vec[now].size();i++){
        if(point.count(vec[now][i].F)==0){
            check(vec[now][i].F,point,all+vec[now][i].S);
        }
    }
}

int main() {
    cin >> n >> m;

    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        vec[a-1].push_back(make_pair(b-1,c));
        vec[b-1].push_back(make_pair(a-1,c));
    }

    rep(i,10){
        uset point;
        checking = i;
        check(i,point,0);
    }

    ll Ans = INT_MAX*-1;
    rep(i,10){
        rep(j,10){
            Ans = max(Ans,ans[i][j]);
        }
    }
    cout << Ans << nl;
    return 0;
}
