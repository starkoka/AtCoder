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
    int n,m,c,ans=0;
    cin >> n >> m >> c;
    vi b(m);
    rep(i,0,m){
        cin >> b[i];
    }

    rep(i,0,n){
        int all=0;
        rep(j,0,m){
            int a;
            cin >> a;
            all += a*b[j];
        }
        if(all+c > 0){
            ans++;
        }
    }
    cout << ans << nl;
}
