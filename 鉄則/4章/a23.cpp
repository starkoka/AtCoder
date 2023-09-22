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
    int n,m;
    cin >> n >> m;
    vector<vector<bool>> vec(m,vector<bool>(n));
    rep(i,0,m){
        rep(j,0,n){
            int a;
            cin >> a;
            vec[i][j] = (a == 1);
        }
    }

    vii dp(m+1,vi(1<<n,INT_MAX));
    dp[0][0] = 0;
    rep(i,0,m){
        rep(j,0,1<<n){
            bitset<10> b=j;
            rep(k,0,n){
                if(vec[i][k]){
                    b.set(k,true);
                }
            }
            if(dp[i][j]!=INT_MAX){
                chmin(dp[i+1][j],dp[i][j]);
                chmin(dp[i+1][b.to_ulong()],dp[i][j]+1);
            }
        }
    }

    cout << (dp[m][(1<<n)-1]==INT_MAX ? -1:dp[m][(1<<n)-1]) << nl;
}