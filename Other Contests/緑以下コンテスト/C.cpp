#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<ll,ll>;
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
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

int main() {
    int n;
    cin >> n;
    map<ll,intp> num;
    unordered_set<ll> number;
    rep(i,0,n){
        ll a;
        cin >> a;
        number.insert(a);
        intp p = num[a];
        if(num[a].F==0 && num[a].S==0){
            num[a]=make_pair(1,1);
        }
        else{
            num[a] = make_pair(p.F+1, p.S * (p.F+1) % 998244353);
        }
    }

    ll ans = 1;
    auto itr = number.begin();
    rep(i,0,number.size()){
        if(i!=0)itr++;
        ans *= num[*itr].S;
        ans %= 998244353;
    }
    cout << ans << nl;
}