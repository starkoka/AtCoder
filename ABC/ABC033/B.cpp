#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i) //繰り返し
#define brep(i,n) for(int i=0, i##_len=((1<<n)); i<i##_len; ++i)
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"

int main(){
    int n,all=0;
    cin >> n;
    vector<pair<string,int>> v(n);

    rep(i,n) {
        string s;
        int p;
        cin >> s >> p;
        v[i] = make_pair(s, p);
        all += p;
    }

    all /= 2;

    rep(i,n){
        if(v[i].S>all){
            cout << v[i].F << nl;
            return 0;
        }
    }
    cout << "atcoder" << nl;
}