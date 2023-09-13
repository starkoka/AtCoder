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
#define F first
#define S second
#define nl "\n"


int main() {
    int n,now=0;
    cin >> n;
    vi cut={0,360};
    rep(i,0,n){
        int a;
        cin >> a;
        now += a;
        now %= 360;
        cut.push_back(now);
    }

    sort(all(cut));
    int ans = 0;
    rep(i,1,cut.size()){
        ans = max(ans,cut[i]-cut[i-1]);
    }
    cout << ans << nl;
}