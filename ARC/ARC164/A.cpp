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
    int t;
    cin >> t;
    rep(i,0,t){
        ll n,k;
        cin >> n >> k;
        ll minK=0,N=n;
        while(N>0){
            minK += N%3;
            N /= 3;
        }
        if(k>=minK && n>=k && k%2==minK%2){
            cout << "Yes" << nl;
        }
        else{
            cout << "No" << nl;
        }
    }
}