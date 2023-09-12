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

ll change(ll k,ll n){
    ll num=1,result=0;
    while(n>0){
        result += n%10*num;
        n /= 10;
        num *= k;
    }
    return result;
}

int main() {
    ll k,a,b;
    cin >> k >> a >> b;
    cout << change(k,a)*change(k,b) << nl;
}