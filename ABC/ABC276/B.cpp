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
    vii vec(n,vi(0));
    rep(i,0,m){
        int a,b;
        cin >> a >> b;
        vec[a-1].push_back(b);
        vec[b-1].push_back(a);
    }

    rep(i,0,n){
        sort(all(vec[i]));
    }

    rep(i,0,n){
        cout << vec[i].size();
        rep(j,0,vec[i].size()){
            cout << " ";
            cout << vec[i][j];
        }
        cout << nl;
    }
}