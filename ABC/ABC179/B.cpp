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
    int n,zorome=0;
    cin >> n;
    rep(i,0,n){
        int d1,d2;
        cin >> d1 >> d2;
        if(d1==d2)zorome++;
        else zorome=0;
        if(zorome==3){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}