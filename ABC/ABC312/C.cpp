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

vi a;
vi b;

int sell(int price){
    return upper_bound(a.begin(),a.end(),price) - a.begin();
}

int buy(int price){
    return b.size() - (lower_bound(b.begin(),b.end(),price) - b.begin());
}

int main(){
    int n,m;
    cin >> n >> m;
    rep(i,n){
        int A;
        cin >> A;
        a.push_back(A);
    }
    rep(i,m){
        int B;
        cin >> B;
        b.push_back(B);
    }
    vsort(a);
    vsort(b);

    int l=1,r=max(a[a.size()-1],b[b.size()-1]+1);
    int ans = (l+r)/2;
    while(!(sell(ans) >= buy(ans) && buy(ans - 1) > sell(ans - 1))){
        if(sell(ans) >= buy(ans)){
            r = ans-1;
        }
        else{
            l = ans+1;
        }
        ans = (l+r)/2;
    }
    cout << ans << nl;
}