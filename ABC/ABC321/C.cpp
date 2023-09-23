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

vector<ll> num;

void make(int keta,vi n,int now){
    if(keta==0){
        ll ans=0;
        fore(i,n){
            ans = ans*10+i;
        }
        num.push_back(ans);
        return;
    }
    if(now==0){
        rep(i,0,10){
            n[0]=i;
            make(keta-1,n,now+1);
        }
    }
    else{
        rep(i,0,n[now-1]){
            n[now]=i;
            make(keta-1,n,now+1);
        }
    }
}

int main(){
    cinSet;
    int k;
    cin >> k;
    rep(i,1,11){
        vi n(i,0);
        make(i,n,0);
    }

    cout << num[k] << nl;
    return 0;
}