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
ll n;

ll count(ll time){
    ll result=0;
    rep(i,n){
        result += time/a[i];
    }
    return result;
}

int main(){
    ll k;
    cin >> n >> k;
    rep(i,n){
        ll A;
        cin >> A;
        a.push_back(A);
    }

    ll l=0,r=1000000000;
    ll ans = (l+r)/2;
    ll c = count(ans);
    while(!(c<k && count(ans+1)>=k)){
        if(c<k){
            l=ans+1;
        }
        else{
            r=ans-1;
        }
        ans = (l+r)/2;
        c = count(ans);
    }

    cout << ans+1 << nl;
}