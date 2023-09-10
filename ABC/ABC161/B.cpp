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
    int n,m,all=0;
    cin >> n >> m;
    vi vec(n);
    rep(i,0,n){
        cin >> vec[i];
        all += vec[i];
    }
    sort(all(vec));
    reverse(all(vec));

    rep(i,0,m){
        if(vec[i]<(double)all/(double)(4*m)){
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
}