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
    reverse(all(s));
    rep(i,0,s.size()){
        if(s[i]=='6'){
            cout << '9';
        }
        else if(s[i]=='9'){
            cout << '6';
        }
        else{
            cout << s[i];
        }
    }
    cout << nl;
}