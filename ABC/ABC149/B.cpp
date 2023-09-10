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
    ll a,b,k;
    cin >> a >> b >> k;
    if(k>=a){
        if(k-a>=b){
            b = 0;
            a=0;
        }
        else{
            b -= k-a;
            a=0;
        }
    }
    else{
        a -=k;
    }

    cout << a << " " << b << nl;
}