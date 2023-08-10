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
    ll all=0;
    cin >> n;
    vector<ll> a(n);
    rep(i,n){
        cin >> a[i];
        all += a[i];
    }
    ll d=all/n;
    ll u=d+1,num=0,ans=0;

    rep(i,n){
        if(a[i]!=d && a[i]!=u){
            if(a[i]>u){
                num += a[i]-u;
                ans += a[i]-u;
            }
            else{
                num -= d-a[i];
                ans += d-a[i];
            }
        }
    }

    cout << (ans+abs(num))/2 << nl;

}