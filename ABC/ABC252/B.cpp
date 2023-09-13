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
    int n,k;
    cin >> n >> k;
    vector<intp> a(n);
    uset b;

    rep(i,0,n){
        cin >> a[i].F;
        a[i].S = i+1;
    }
    rep(i,0,k){
        int B;
        cin >> B;
        b.insert(B);
    }

    sort(all(a));
    reverse(all(a));

    int good = a[0].F;
    rep(i,0,n){
        if(a[i].F!=good)break;
        if(b.count(a[i].S)){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}