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
    int n;
    cin >> n;
    ll m=0,y=0,c=0;
    vi x(n);
    rep(i,0,n){
        cin >> x[i];
    }

    outset(15);
    rep(i,0,n){
        m += abs(x[i]);
    }
    cout << m << nl;

    rep(i,0,n){
        y += abs(x[i])*(ll)abs(x[i]);
    }
    cout << sqrt(y) << nl;

    rep(i,0,n){
        c = max((ll)c,abs((ll)x[i]));
    }
    cout << c << nl;
}