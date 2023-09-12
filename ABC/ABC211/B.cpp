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
    vector<string> str={"H" , "2B" , "3B" , "HR"};
    vector<string> s(4);
    rep(i,0,4){
        cin >> s[i];
    }
    sort(all(str));
    sort(all(s));
    if(str==s){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}