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
    int n,ans=0;
    cin >> n;
    vi p(n);
    rep(i,0,n){
        cin >> p[i];
    }
    rep(i,1,n-1){
        if((p[i-1]<p[i] && p[i]<p[i+1]) || (p[i-1]>p[i] && p[i]>p[i+1])){
            ans++;
        }
    }
    cout << ans << nl;
}