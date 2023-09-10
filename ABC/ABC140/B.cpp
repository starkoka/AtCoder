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
    vi a(n),b(n),c(n-1);
    rep(i,0,n){
        cin >> a[i];
        a[i]--;
    }
    rep(i,0,n)cin >> b[i];
    rep(i,0,n-1)cin >> c[i];

    int ans=0;
    rep(i,0,n){
        ans += b[a[i]];
        if(i!=0){
            if(a[i]-a[i-1]==1){
                ans += c[a[i-1]];
            }
        }
    }

    cout << ans << nl;
}