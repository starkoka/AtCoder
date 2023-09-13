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
#define LL_MAX 9223372036854775807

int n;

int num(int m){
    cin >> m;
    int result = m;
    if(m == -1){
        return n-1;
    }
    else if(m==n){
        return 0;
    }
    else{
        return m;
    }
}

int main() {
    cin >> n;
    vii vec(n,vi(n));
    intp maxA;
    int maxNum=INT_MAX*-1;
    rep(i,0,n){
        rep(j,0,n){
            char c;
            cin >> c;
            vec[i][j] = c-'0';
            if(vec[i][j]>maxNum){
                maxNum=vec[i][j];
                maxA = make_pair(i,j);
            }
        }
    }

    vector<intp> move(8);
    move[0] = make_pair(1,0);
    move[1] = make_pair(-1,0);
    move[2] = make_pair(0,1);
    move[3] = make_pair(0,-1);
    move[4] = make_pair(1,1);
    move[5] = make_pair(-1,1);
    move[6] = make_pair(1,-1);
    move[7] = make_pair(-1,-1);

    ll ans = LL_MAX*-1;
    rep(x,0,n){
        rep(y,0,n){
            rep(i,0,8){
                intp now = make_pair(x,y);
                ll sum=vec[x][y];
                rep(j,0,n-1){
                    now.F = num(now.F+move[i].F);
                    now.S = num(now.S+move[i].S);
                    sum *= 10;
                    sum += vec[now.F][now.S];
                }
                ans = max(ans,sum);
            }
        }
    }
    cout << ans << nl;
}