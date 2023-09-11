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
    int n,x;
    cin >> n >> x;
    x *= 100;
    int num = 0;
    rep(i,1,n+1){
        int v,p;
        cin >> v >> p;
        num += v*p;
        if(num>x){
            cout << i << nl;
            return 0;
        }
    }
    cout << -1 << nl;
}