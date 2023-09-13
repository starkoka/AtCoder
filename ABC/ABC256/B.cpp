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
    int n;
    cin >> n;
    string s = "000";
    rep(i,0,n){
        s[0]='1';
        int a;
        cin >> a;
        rep(j,0,a){
            s = '0'+ s;
        }
    }
    cout << n-((s[0]-'0')+(s[1]-'0')+(s[2]-'0')+(s[3]-'0')) << nl;
}