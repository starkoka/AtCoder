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

    vii dp(n+1,vi(1000*n+10,INT_MAX));
    dp[0][0]=0;
    rep(i,0,n){
        rep(j,0,1000*n+1){
            if(dp[i][j]!=INT_MAX){
                chmin(dp[i+1][j],dp[i][j]);
                if((ll)dp[i][j]+(ll)vec[i].F<=w){
                    chmin(dp[i+1][j+vec[i].S],dp[i][j]+vec[i].F);
                }
            }
        }
    }


    rrep(i,1000*n+9,0){
        if(dp[n][i]!=INT_MAX){
            cout << i << nl;
            return 0;
        }
    }
}