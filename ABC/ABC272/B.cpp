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
    int n,m;
    cin >> n >> m;
    vii vec(n,vi(n,0));
    rep(i,0,n)vec[i][i]=1;

    rep(i,0,m){
        int k;
        cin >> k;
        vi x(k);
        rep(j,0,k){
            cin >> x[j];
        }
        rep(j,0,k-1){
            rep(l,j+1,k){
                vec[x[j]-1][x[l]-1]++;
                vec[x[l]-1][x[j]-1]++;
            }
        }
    }

    rep(i,0,n){
        rep(j,0,n){
            if(vec[i][j]==0){
                cout << "No" << nl;
                return 0;
            }
        }
    }
    cout << "Yes" << nl;
}