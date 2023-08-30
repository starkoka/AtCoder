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
#define F first
#define S second
#define nl "\n"


int main() {
    int n;
    cin >> n;
    vi a(n+1,INT_MAX),b(n+1,INT_MAX);
    rep(i,2,n+1){
        cin >> a[i];
    }
    rep(i,3,n+1){
        cin >> b[i];
    }

    vi dp(n+1);
    dp[1] = 0;
    dp[2] = a[2];
    rep(i,3,n+1){
        dp[i] = min(dp[i-1]+a[i] , dp[i-2]+b[i]);
    }

    cout << dp[n] << nl;
}
