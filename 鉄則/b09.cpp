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
    vii list(1509,vi(1509,0));

    rep(i,n){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        list[a][b]++;
        list[c][d]++;
        list[c][b]--;
        list[a][d]--;
    }

    rep(i,1509){
        for(int j=1;j<1509;j++){
            list[i][j]  += list[i][j-1];
        }
    }

    rep(j,1509){
        for(int i=1;i<1509;i++){
            list[i][j] += list[i-1][j];
        }
    }

    int ans = 0;
    rep(i,1509){
        rep(j,1509){
            if(list[i][j] != 0)ans++;
        }
    }

    cout << ans << nl;
}