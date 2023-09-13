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
    vector<intp> vec(n,make_pair(0,0));
    rep(i,0,4*n-1){
        int a;
        cin >> a;
        vec[a-1]=make_pair(vec[a-1].F+1,a);
    }
    sort(all(vec));
    cout << vec[0].S << nl;
}