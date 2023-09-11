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
    int n,k;
    cin >> n >> k;
    uset sunuke;
    rep(i,0,k){
        int d;
        cin >> d;
        rep(j,0,d){
            int a;
            cin >> a;
            sunuke.insert(a);
        }
    }

    int ans = 0;
    rep(i,1,n+1){
        if(sunuke.count(i)==0)ans++;
    }
    cout << ans << nl;
}