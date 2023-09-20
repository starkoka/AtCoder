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
    string s,t;
    cin >> s >> t;
    vii dp(s.size(),vi(t.size(),INT_MAX));

    dp[0][0]=0;
    rep(i,0,s.size()){
        rep(j,0,t.size()){
            if(i==j){
                int a=1;
                a += 1;
            }
            if(dp[i][j]!=INT_MAX){
                if(i!=s.size()-1 && j!=s.size()-1){
                    if(s[i]==t[j]){
                        chmin(dp[i+1][j+1],dp[i][j]);
                    }
                    else{
                        chmin(dp[i+1][j+1],dp[i][j]+1);
                    }
                }
                if(i!=s.size()-1){
                    chmin(dp[i+1][j],dp[i][j]+1);
                }
                if(j!=t.size()-1){
                    chmin(dp[i][j+1],dp[i][j]+1);
                }
            }
        }
    }
    cout << dp[s.size()-1][t.size()-1] + (s[s.size()-1]!=t[t.size()-1] ? 1:0) << nl;
}