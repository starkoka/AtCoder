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

int main() {
    int m;
    vector<string> s(3);
    cin >> m;
    rep(i,0,3){
        cin >> s[i];
        s[i] = s[i]+s[i]+s[i];
    }
    map<int,vii> num;
    vii sample(3,vi(0));
    rep(i,0,10){
        num[i] = sample;
    }

    rep(i,0,3){
        rep(j,0,m*3){
            int c = s[i][j]-'0';
            num[c][i].push_back(j);
        }
    }

    int ans=INT_MAX;
    rep(i,0,10){
        vii vec = num[i];
        rep(j,0,3){
            rep(k,0,3){
                rep(l,0,3){
                    if(vec[0].size()>j && vec[1].size()>k && vec[2].size()>l){
                        if(vec[0][j]!=vec[1][k] && vec[1][k]!=vec[2][l] && vec[2][l]!=vec[0][j]){
                            ans = min(ans,max(vec[0][j],max(vec[1][k],vec[2][l])));
                        }
                    }
                }
            }
        }
    }
    cout << (ans==INT_MAX ? -1 : ans) << nl;
}