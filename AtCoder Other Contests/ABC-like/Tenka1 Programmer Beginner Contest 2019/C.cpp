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
    string s;
    cin >> n >> s;
    vi black(n,0),white(n,0);
    rep(i,0,n){
        if(i!=0){
            black[i] += black[i-1] + (s[i-1]=='#' ? 1 : 0);
        }
    }

    rrep(i,n-1,0){
        if(i!=n-1){
            white[i] += white[i+1] + (s[i+1]=='.' ? 1 : 0);
        }
    }

    int ans = INT_MAX;
    rep(i,0,n){
        ans = min(ans,white[i]+black[i]);
    }
    cout << ans << nl;
}
