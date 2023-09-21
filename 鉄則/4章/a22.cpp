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
    vi dp(n+1,INT_MAX*-1),a(n),b(n);
    dp[1]=0;
    rep(i,1,n){
        cin >> a[i];
    }
    rep(i,1,n){
        cin >> b[i];
    }

    rep(i,1,n){
        chmax(dp[a[i]],dp[i]+100);
        chmax(dp[b[i]],dp[i]+150);
    }
    cout << dp[n] << nl;
}