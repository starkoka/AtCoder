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
    string s,t;
    cin >> s >> t;
    vii dp(s.size()+1,vi(t.size()+1,INT_MAX));
    dp[0][0]=0;
    rep(x,0,s.size()+1){
        rep(y,0,t.size()+1){
            if(x!=s.size()){
                chmin(dp[x+1][y],dp[x][y]+1);
            }
            if(y!=t.size()){
                chmin(dp[x][y+1],dp[x][y]+1);
            }
            if(x!=s.size() && y!=t.size()){
                if(s[x]==t[y]){
                    chmin(dp[x+1][y+1],dp[x][y]);
                }
                else{
                    chmin(dp[x+1][y+1],dp[x][y]+1);
                }
            }

        }
    }

    cout << dp[s.size()][t.size()] << nl;
}