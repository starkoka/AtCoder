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
    string s;
    cin >> s;
    int n = (int)s.size();
    rep(i,0,n){
        if(s[s.size()-1]=='0'){
            s.pop_back();
        }
    }

    rep(i,0,s.size()/2){
        if(s[i]!=s[s.size()-i-1]){
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
}