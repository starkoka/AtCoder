#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"

string loop(string s){
    char c = s[s.size()-1];
    for(int i=s.size()-1; i>=1 ; i--){
        s[i] = s[i-1];
    }
    s[0] = c;
    return s;
}


int main() {
    string s,t;
    cin >> s >> t;
    rep(i,s.size()){
        s = loop(s);
        if(s==t){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}
