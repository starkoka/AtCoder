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
    if(s[1]!='R'){
        if(s[0]=='R' || s[2]=='R'){
            cout << 1 << nl;
        }
        else{
            cout << 0 << nl;
        }
    }
    else{
        if(s[0]=='R' || s[2]=='R'){
            if(s[0]=='R' && s[2]=='R'){
                cout << 3 << nl;
            }
            else{
                cout << 2 << nl;
            }
        }
        else{
            cout << 1 << nl;
        }
    }
}