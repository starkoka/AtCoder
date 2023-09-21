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
    cin >> n;
    vector<intp> score(n);
    rep(i,0,n){
        cin >> score[i].F >> score[i].S;
        score[i].F--;
    }
    vii dp(n,vi(n,INT_MAX*-1));
    dp[0][n-1] = 0;
    rep(i,0,n){
        rrep(j,n-1,0){
            if(i>j)break;
            if(i!=0){
                if(i<=score[i-1].F && score[i-1].F<=j){
                    chmax(dp[i][j],dp[i-1][j]+score[i-1].S);
                }
                else{
                    chmax(dp[i][j],dp[i-1][j]);
                }
            }
            if(j!=n-1){
                if(i<=score[j+1].F && score[j+1].F<=j){
                    chmax(dp[i][j],dp[i][j+1]+score[j+1].S);
                }
                else{
                    chmax(dp[i][j],dp[i][j+1]);
                }
            }
        }
    }

    int ans = INT_MAX*-1;
    rep(i,0,n){
        rep(j,0,n){
            chmax(ans,dp[i][j]);
        }
    }
    cout << ans << nl;
}