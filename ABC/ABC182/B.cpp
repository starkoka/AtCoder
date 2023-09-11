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
    int n,aMax=INT_MAX*-1;
    cin >> n;
    vi a(n);
    rep(i,0,n){
        cin >> a[i];
        aMax = max(aMax,a[i]);
    }

    intp ans = make_pair(0,0);
    rep(i,2,aMax+1){
        int num=0;
        fore(j,a){
            if(j%i==0)num++;
        }
        if(ans.F<num)ans=make_pair(num,i);
    }
    cout << ans.S << nl;

}