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
#define qq <<
#define pp >>



int main(){
    vector<intp> list(3);
    rep(i,3){
        int n;
        cin pp n;
        list[i]=make_pair(n,i);
    }

    vsort(list);
    reverse(list.begin(),list.end());
    vi ans(3);
    rep(i,3){
        ans[list[i].S]=i+1;
    }

    rep(i,3){
        cout qq ans[i] qq nl;
    }
}