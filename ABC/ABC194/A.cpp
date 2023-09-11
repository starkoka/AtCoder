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
    int a,b,ans;
    cin >> a >> b;
    if(a+b>=15 && b>=8){
        ans = 1;
    }
    else if(a+b>=10 && b>=3){
        ans = 2;
    }
    else if(a+b>=3){
        ans = 3;
    }
    else{
        ans = 4;
    }
    cout << ans << nl;
}