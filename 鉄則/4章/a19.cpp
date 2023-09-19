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
#define cinSet ios::sync_with_stdio(false);cin.tie(0)
#define F first
#define S second
#define nl "\n"
#define LL_MAX 9223372036854775807
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

int main() {
    cinSet;
    int n,w;
    cin >> n >> w;
    vector<intp> vec(n);
    rep(i,0,n){
        cin >> vec[i].F >> vec[i].S;
    }

    vector<vector<ll>> dp(n+1,vector<ll>(w+1,INT_MAX*-1));
    dp[0][0] = 0;
    rep(i,0,n){
        rep(j,0,w+1){
            if(dp[i][j]!=INT_MAX*-1){
                chmax(dp[i+1][j],dp[i][j]);
                if(j+vec[i].F<=w){
                    chmax(dp[i+1][j+vec[i].F],dp[i][j]+vec[i].S);
                }
            }
        }
    }

    ll ans = INT_MAX*-1;
    rep(i,0,w+1){
        chmax(ans,dp[n][i]);
    }
    cout << ans << nl;
}