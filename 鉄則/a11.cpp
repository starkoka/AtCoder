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
    int n,x;
    cin >> n >> x;
    vi a(n);
    rep(i,n){
        cin >> a[i];
    }
    int l=0,r=n-1;
    int ans = (l+r)/2;
    while(a[ans]!=x){
        ans = (l+r)/2;
        if(a[ans]>x){
            r = ans-1;
        }
        else{
            l = ans+1;
        }
    }

    cout << ans+1 << nl;
}