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
    vii vec(3,vi(3));
    rep(i,0,3){
        rep(j,0,3){
            cin >> vec[i][j];
        }
    }
    int n;
    cin >> n;
    vi b(n);
    rep(i,0,n){
        cin >> b[i];
    }

    rep(i,0,n){
        rep(j,0,3){
            rep(k,0,3){
                if(vec[j][k]==b[i])vec[j][k]=-1;
            }
        }
    }

    rep(i,0,3){
        if(vec[i][0]==vec[i][1] && vec[i][1]==vec[i][2]){
            cout << "Yes" << nl;
            return 0;
        }
    }
    rep(i,0,3){
        if(vec[0][i]==vec[1][i] && vec[1][i]==vec[2][i]){
            cout << "Yes" << nl;
            return 0;
        }
    }
    if(vec[0][0]==vec[1][1] && vec[2][2]==vec[1][1]){
        cout << "Yes" << nl;
        return 0;
    }
    if(vec[0][2]==vec[1][1] && vec[2][0]==vec[1][1]){
        cout << "Yes" << nl;
        return 0;
    }
    cout << "No" << nl;
}