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
    int h,w;
    cin >> h >> w;
    vii vec(h,vi(w));
    rep(i,0,h){
        rep(j,0,w){
            cin >> vec[i][j];
        }
    }

    rep(j,0,w){
        rep(i,0,h){
            if(i!=0)cout  << " ";
            cout << vec[i][j];
        }
        cout << nl;
    }
}