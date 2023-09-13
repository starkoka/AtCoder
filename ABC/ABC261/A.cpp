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
#define LL_MAX 9223372036854775807

int main() {
    int l1,r1,l2,r2,ans=0;
    cin >> l1 >> r1 >> l2 >> r2;
    rep(i,min(l1,l2),max(r1,r2)+1){
        if(i>=l1 && i>=l2 && i<=r1 && i<=r2){
            ans++;
        }
    }
    cout << max(ans-1,0) << nl;
}