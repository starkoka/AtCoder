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
    string s,t;
    int ans = INT_MAX;
    cin >> s >> t;
    rep(i,0,s.size()-t.size()+1){
        int num = 0;
        rep(j,0,t.size()){
            if(s[i+j]!=t[j])num++;
        }
        ans = min(ans,num);
    }
    cout << ans << nl;
}