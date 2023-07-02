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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>


int main(void){
    int n,m,p,ans=0;
    cin pp n pp m;
    vector<string> c(n);
    map<string,int> name;
    rep(i,n){
        cin pp c[i];
    }

    vector<string> color(m);
    vi kakaku(m+1);
    rep(i,m){
        cin pp color[i];
    }
    rep(i,m+1){
        cin pp kakaku[i];
    }

    rep(i,m){
        name[color[i]] = kakaku[i+1];
    }



    rep(i,n){
        if(name.count(c[i])){
            ans += name[c[i]];
        }
        else{
            ans += kakaku[0];
        }
    }

    cout qq ans qq nl;
}