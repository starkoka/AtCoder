#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<ll,ll>;
using uset = unordered_set<int>;
using vi = vector<ll>;
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

int main() {
    cinSet;
    int n,m;
    cin >> n >> m;
    vi ans(n,0);
    priority_queue<pair<ll,pair<bool,intp>>, vector<pair<ll,pair<bool,intp>>>, greater<pair<ll,pair<bool,intp>>>> event;
    set<ll> people;
    rep(i,0,n){
        people.insert(i);
    }
    rep(i,0,m){
        int t,w,s;
        cin >> t >> w >> s;
        event.emplace(make_pair(t,make_pair(true,make_pair(w,s))));
    }

    while(!event.empty()){
        pair<ll,pair<bool,intp>> e = event.top();
        event.pop();
        if(e.S.F){ //そうめんを流す
            if(!people.empty()){
                auto itr = people.begin();
                people.erase(itr);
                ans[*itr] += e.S.S.F;
                event.emplace(e.F+e.S.S.S,make_pair(false,make_pair(*itr,0)));
            }
        }
        else{ //人が戻る
            people.insert(e.S.S.F);
        }
    }

    rep(i,0,n){
        cout << ans[i] << nl;
    }
}