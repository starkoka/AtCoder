#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"


int main() {
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    int maxX=INT_MAX*-1,minY=INT_MAX;
    rep(i,n){
        int a;
        cin >> a;
        maxX = max(maxX,a);
    }
    rep(i,m){
        int a;
        cin >> a;
        minY = min(minY,a);
    }

    cout << (max(x,maxX) < min(y,minY) ? "No War" : "War" ) << nl;
}
