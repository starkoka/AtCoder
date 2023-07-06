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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(){
    ll n,m=0;
    cin pp n;
    if(n<2){
        cout qq 0 qq nl;
    }
    else if(n==3){
        cout qq 1 qq nl;
    }
    else{
        vector<ll> list(3);
        list = {0,0,1};
        rep(i,n-3){
            m = (list[0]+list[1]+list[2])%10007;
            list[0]=list[1]%10007;
            list[1]=list[2]%10007;
            list[2]=m%10007;
        }
        cout qq m%10007 qq nl;
    }

}