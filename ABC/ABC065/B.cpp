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
    vi list(n);
    rep(i,n){
        cin >> list[i];
        list[i]-=1;
    }

    uset point;
    int now = 0;
    point.insert(now);
    rep(i,n){
        now = list[now];
        if(point.count(now)){
            break;
        }
        point.insert(now);
        if(now == 2-1){
            cout << i+1 << nl;
            return 0;
        }
    }
    cout << -1 << nl;
}
