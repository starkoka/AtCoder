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
    int n,sum=INT_MAX;
    cin >> n;
    vector<intp> a(n),b(n);

    rep(i,0,n){
        cin >> a[i].F >> b[i].F;
        a[i].S = i;
        b[i].S = i;
        sum = min(sum,a[i].F+b[i].F);
    }
    sort(all(a));
    sort(all(b));


    if(a[0].S == b[0].S){
        sum = min(sum,min(max(a[1].F , b[0].F) , max(a[0].F , b[1].F)));
    }
    else{
        sum = min(max(a[0].F , b[0].F),sum);
    }

    cout << sum << nl;
}