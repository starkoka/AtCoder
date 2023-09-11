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
    int n,m,t;
    cin >> n >> m >> t;
    vi vec(m*2);
    rep(i,0,m){
        cin >> vec[i*2] >> vec[i*2+1];
    }

    int now = n;
    rep(i,0,m*2+1){
        if(i==0){
            now -= vec[0];
        }
        else if(i==m*2){
            now -= t-vec[m*2-1];
        }
        else if(i%2==0){
            now -= vec[i]-vec[i-1];
        }
        else if(i%2==1){
            now += vec[i]-vec[i-1];
            now = min(now,n);
        }

        if(now<=0){
            cout << "No" << nl;
            return 0;
        }
    }
    cout << "Yes" << nl;
}