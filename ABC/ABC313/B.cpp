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
    int n,m;
    cin >> n >> m;
    vii vec(n,vi(0));
    rep(i,m){
        int a,b;
        cin >> a >> b;
        vec[b-1].push_back(a);
    }

    int count=0,ans=-1;
    rep(i,n){
        if(vec[i].size()==0){
            count++;
            if(count>1){
                ans = -1;
                break;
            }
            else{
                ans = i+1;
            }
        }
    }
    cout << ans << nl;
    return 0;
}