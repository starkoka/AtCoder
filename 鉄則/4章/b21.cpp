#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using minp_queue = priority_queue<intp, vector<intp>, greater<intp>>;
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


int main(){
    cinSet;
    int n;
    string s;
    cin >> n >> s;
    vii dp(n,vi(n,INT_MAX*-1));
    rep(i,0,n){
        dp[i][i] = 1;
    }
    rep(i,0,n-1){
        if(s[i]==s[i+1])dp[i][i+1] = 2;
        else dp[i][i+1] = 1;
    }

    rep(len,2,n){
        rep(l,0,n-len){
            int r = l + len;
            if(s[l]==s[r]){
                dp[l][r] = max({dp[l+1][r],dp[l][r-1],dp[l+1][r-1]+2});
            }
            else{
                dp[l][r] = max({dp[l+1][r],dp[l][r-1]});
            }
        }
    }

    cout << dp[0][n-1] << nl;
}