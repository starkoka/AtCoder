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
    int n,x;
    cin >> n >> x;
    vi a(n-1);
    rep(i,0,n-1){
        cin >> a[i];
    }
    sort(all(a));
    rep(i,0,101){
        vi vec = a;
        vec.push_back(i);
        sort(all(vec));
        int all = 0;
        rep(j,1,n-1){
            all += vec[j];
        }
        if(all>=x){
            cout << i << nl;
            return 0;
        }
    }
    cout << -1 << nl;
}