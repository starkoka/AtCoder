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
    vi x(3),y(3);
    rep(i,0,3){
        cin >> x[i] >> y[i];
    }
    sort(all(x));
    sort(all(y));

    if(x[0]==x[1]){
        cout << x[2] << " ";
    }
    else{
        cout << x[0] << " ";
    }
    if(y[0]==y[1]){
        cout << y[2] << nl;
    }
    else{
        cout << y[0] << nl;
    }
}