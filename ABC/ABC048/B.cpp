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
    ll a,b,x,zero=0;
    cin >> a >> b >> x;
    ll Min = (a%x==0 ? a : a/x*x+x);
    if(b-Min<0){
        cout << (a%x==0 ? 1 : 0);
        return 0;
    }
    cout << max(zero,(b-Min)/x+1) << nl;
    return 0;
}