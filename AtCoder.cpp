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

vector<ll> a;
vector<ll> b;

int sell(ll price){
    int ans = 0;
    rep(i,a.size()){
        if(a[i]<=price)ans++;
    }
    return ans;
}

int buy(ll price){
    int ans = 0;
    rep(i,b.size()){
        if(b[i]>=price)ans++;
    }
    return ans;
}

int main(){
    int n,m;
    ll maxA=0;
    cin >> n >> m;
    rep(i,n){
        ll A;
        cin >> A;
        a.push_back(A);
        if(maxA<A)maxA=A;
    }

    rep(i,m){
        ll B;
        cin >> B;
        b.push_back(B);
    }


    ll l=0,r=maxA+1;
    while(l+1!=r){
        ll check = (l+r)/2;
        if(sell(check)>=buy(check)){
            r=check;
        }
        else{
            l=check;
        }
    }
    cout << r << nl;
}