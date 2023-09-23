#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using minp_queue = priority_queue<intp, vector<intp>, greater<intp>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define outset(x) cout << setprecision(x)
#define cinSet ios::sync_with_stdio(false);cin.tie(0)
#define F first
#define S second
#define nl "\n"
#define LL_MAX 9223372036854775807
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}


int main(){
    cinSet;
    ll n,m,p;
    cin >> n >> m >> p;
    ll allA=0,allB=0;
    vector<ll> a(n),b(m);
    rep(i,0,n){
        cin >> a[i];
        allA += a[i];
    }
    rep(i,0,m){
        cin >> b[i];
        allB += b[i];
    }
    sort(all(a));
    sort(all(b));
    vector<ll> sumB(m);
    sumB[0]=b[0];
    rep(i,1,m){
        sumB[i] = sumB[i-1]+b[i];
    }
    ll ans = allA*m+allB*n;
    fore(A,a){
        ll B = p-A;
        auto itr = lower_bound(all(b),B);
        int idx = itr-b.begin();
        ans -= A*(b.end()-itr)+(sumB[m-1]-(idx==0 ? 0:sumB[idx-1]));
        ans += p*(b.end()-itr);
    }
    cout << ans << nl;
}