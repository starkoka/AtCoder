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
    int h,w,x,y,ans=1;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    vcc vec(101,vc(101,'#'));
    rep(i,0,h){
        string s;
        cin >> s;
        rep(j,0,w){
            vec[i][j] = s[j];
        }
    }

    rep(i,x+1,h){
        if(vec[i][y]=='#'){
            break;
        }
        ans++;
    }
    rrep(i,x-1,0){
        if(vec[i][y]=='#'){
            break;
        }
        ans++;
    }
    rep(i,y+1,w){
        if(vec[x][i]=='#'){
            break;
        }
        ans++;
    }
    rrep(i,y-1,0){
        if(vec[x][i]=='#'){
            break;
        }
        ans++;
    }
    cout << ans << nl;
}