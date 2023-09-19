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
    int n,s;
    cin >> n >> s;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
    }

    vector<vector<bool>> dp(n+1,vector<bool>(s+1));
    dp[0][0]=true;
    rep(i,0,n){
        rep(j,0,s+1){
            if(dp[i][j]){
                dp[i+1][j] = true;
                if(j+a[i]==s){
                    cout << "Yes" << nl;
                    return 0;
                }
                else if(j+a[i]<s){
                    dp[i+1][j+a[i]] = true;
                }
            }
        }
    }
    cout << "No" << nl;
}