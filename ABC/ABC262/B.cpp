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
    uset s;
    vector<uset> vec(n,s);
    rep(i,0,m){
        int u,v;
        cin >> u >> v;
        vec[u-1].insert(v-1);
        vec[v-1].insert(u-1);
    }
    int ans = 0;
    rep(i,0,n-2){
        rep(j,i+1,n-1){
            rep(k,j+1,n){
                if(vec[i].count(j) && vec[j].count(k) && vec[k].count(i)){
                    ans++;
                }
            }
        }
    }
    cout << ans << n;
}