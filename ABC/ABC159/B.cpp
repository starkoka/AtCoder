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

bool check(int l,int r,string s){
    rep(i,0,(r-l+1)/2){
        if(s[i+l]!=s[r-i]){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    if(check(0,s.size()-1,s) && check(0,(s.size()-1)/2-1,s) && check((s.size()+3)/2-1,s.size()-1,s)){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}