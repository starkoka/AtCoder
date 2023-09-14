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
    int n,t;
    cin >> n >> t;
    vector<pair<int,int>> vec(n);
    rep(i,0,n){
        cin >> vec[i].F;
    }
    rep(i,0,n){
        cin >> vec[i].S;
    }

    map<int,vector<intp>> m;
    rep(i,0,n){
        m[vec[i].F].push_back(make_pair(vec[i].S,i+1));
    }
    if(m[t].size()==0){
        sort(all(m[vec[0].F]));
        cout << m[vec[0].F][m[vec[0].F].size()-1].S << nl;
    }
    else{
        sort(all(m[t]));
        cout << m[t][m[t].size()-1].S << nl;
    }
}