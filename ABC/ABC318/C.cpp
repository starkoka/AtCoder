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
    ll n,d,p,ans=0;
    cin >> n >> d >> p;
    vi f(n);
    rep(i,0,n){
        cin >> f[i];
    }
    sort(all(f));
    reverse(all(f));

    ll sum = 0;
    rep(i,1,n+1){
        sum += f[i-1];
        if(i%d==0){
            ans += min(sum,p);
            sum = 0;
        }
    }
    ans += min(sum,p);
    cout << ans << nl;
}
