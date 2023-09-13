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

int main() {
    int n;
    cin >> n;
    vector<intp> vec(n);
    rep(i,0,n){
        cin >> vec[i].F >> vec[i].S;
    }

    double ans=0;
    rep(i,0,n-1){
        rep(j,i+1,n){
            ans = max(ans,pow(vec[i].F-vec[j].F,2)+pow(vec[i].S-vec[j].S,2));
        }
    }

    outset(10);
    cout << sqrt(ans) << nl;
}