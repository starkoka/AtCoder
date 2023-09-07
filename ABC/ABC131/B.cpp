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
    int n,l;
    cin >> n >> l;
    vector<intp> vec(n);
    rep(i,1,n+1) {
        int num = l+i-1;
        intp p;
        if(num<0){
            p = make_pair(num*-1,-1);
        }
        else{
            p = make_pair(num,1);
        }
        vec[i-1]=p;
    }
    sort(all(vec));

    int ans = 0;
    rep(i,1,n){
        ans += vec[i].F * vec[i].S;
    }
    cout << ans << nl;
}
