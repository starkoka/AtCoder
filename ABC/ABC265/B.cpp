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
#define LL_MAX 9223372036854775807

int main() {
    ll n,m,t;
    cin >> n >> m >> t;
    vi a(n);
    rep(i,0,n-1){
        cin >> a[i];
        a[i] *= -1;
    }
    rep(i,0,m){
        int x,y;
        cin >> x >> y;
        a[x-1] += y;
    }

    rep(i,0,n-1){
        t += a[i];
        if(t<=0){
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
}