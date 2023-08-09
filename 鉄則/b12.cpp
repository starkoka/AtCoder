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
    int n;
    cin >> n;

    double l=0,r=100,o;
    rep(i,25){
        o =(l+r)/2;
        if(o*o*o+o<n){
            l = o;
        }
        else{
            r = o;
        }
    }
    cout << o << nl;
}