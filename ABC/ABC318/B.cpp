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
#define F first
#define S second
#define nl "\n"


int main() {
    int n;
    cin >> n;
    vii list(109,vi(109,0));

    rep(i,0,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        rep(j,a,b){
            rep(k,c,d){
                list[j][k]++;
            }
        }
    }

    int ans = 0;
    rep(i,0,109){
        rep(j,0,109){
            if(list[i][j]!=0)ans++;
        }
    }
    cout << ans << nl;
}
