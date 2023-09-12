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
    vi num = {1,2,3,4,5,6,7,8,9,0};
    string x,ans="Weak";
    cin >> x;
    if(x[0] != x[1] || x[1]!=x[2] || x[2]!=x[3]){
        rep(i,0,3){
            if(num[x[i]-'0'] != x[i+1]-'0'){
                ans = "Strong";
                break;
            }
        }
    }
    cout << ans << nl;
}