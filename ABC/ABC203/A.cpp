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
    vi vec(3);
    rep(i,0,3){
        cin >> vec[i];
    }
    sort(all(vec));
    if(vec[0]==vec[1]){
        cout << vec[2];
    }
    else if(vec[2]==vec[1]){
        cout << vec[0];
    }
    else{
        cout << 0;
    }
    cout << nl;
}