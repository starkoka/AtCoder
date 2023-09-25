
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
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

int num = 0;

int main(){
    cinSet;
    int n;
    cin >> n;
    vector<intp> vec(n);
    rep(i,0,n){
        cin >> vec[i].F >> vec[i].S;
    }

    vector<vector<double>> dp(1<<n,vector<double>(n,1e9));
    dp[0][0] = 0;
    rep(i,0,1<<n){
        rep(j,0,n){
            if(dp[i][j]!=1e9){
                bitset<15> b=i;
                rep(next,0,n){
                    if(!b.test(next)){
                        b.set(next);
                        double l = sqrt(pow(vec[j].F-vec[next].F,2)+pow(vec[j].S-vec[next].S,2));
                        chmin(dp[b.to_ullong()][next],dp[i][j] + l);
                        b.set(next,false);
                    }
                }
            }
        }
    }

    cout << dp[(1<<n)-1][0] << nl;
}