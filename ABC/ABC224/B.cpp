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

    rep(i1,0,h-1){
        rep(i2,i1+1,h){
            rep(j1,0,w-1){
                rep(j2,j1+1,w){
                    if(vec[i1][j1]+vec[i2][j2] > vec[i1][j2]+vec[i2][j1]){
                        cout << "No" << nl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << nl;
}