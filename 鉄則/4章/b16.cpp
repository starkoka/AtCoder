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
    vi h(n);
    rep(i,0,n){
        cin >> h[i];
    }

    vi dp(n);
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    rep(i,2,n){
        dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]) , dp[i-2] + abs(h[i]-h[i-2]));
    }

    cout << dp[n-1] << nl;
}
