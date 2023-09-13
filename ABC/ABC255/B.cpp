#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
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


int main() {
    ll n,k;
    cin >> n >> k;
    uset a;
    rep(i,0,k){
        ll A;
        cin >> A;
        a.insert(A);
    }
    vector<pair<ll,ll>> p,light;
    rep(i,0,n){
        ll x,y;
        cin >> x >> y;
        if(a.count(i+1)){
            light.emplace_back(x,y);
        }
        else{
            p.emplace_back(x,y);
        }
    }

    ll m=INT_MAX*-1;
    rep(i,0,p.size()){
        ll minLight=9223372036854775807;
        rep(j,0,light.size()){
            minLight = min(minLight,(p[i].F-light[j].F)*(p[i].F-light[j].F)+(p[i].S-light[j].S)*(p[i].S-light[j].S));
        }
        m = max(m,minLight);
    }

    outset(20);
    cout << sqrt(m) << nl;
}