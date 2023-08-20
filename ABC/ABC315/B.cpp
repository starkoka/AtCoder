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
    int m,all=0;
    cin >> m;
    vi n(m);
    rep(i,m){
        cin >> n[i];
        all += n[i];
    }
    int center = all/2+1;
    rep(i,m){
        if(center<=n[i]){
            cout << i+1 << " " << center;
            return 0;
        }
        else{
            center -= n[i];
        }
    }
    cout << m << " " << center << nl;
}
