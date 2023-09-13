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
    int n,m;
    cin >> n >> m;
    map<int,int> a;
    rep(i,0,n){
        int A;
        cin >> A;
        a[A]++;
    }
    rep(j,0,m){
        int b;
        cin >> b;
        if(a[b]==0){
            cout << "No" << nl;
            return 0;
        }
        a[b]--;
    }
    cout << "Yes" << nl;
}