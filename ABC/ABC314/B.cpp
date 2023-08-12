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
    vector<uset> list(n);

    rep(i,n){
        int c;
        cin >> c;
        rep(j,c){
            int a;
            cin >> a;
            list[i].insert(a);
        }
    }

    int x,Min=38,m=0;
    cin >> x;

    rep(i,n){
        if(list[i].count(x)!=0){
            Min = min((int)list[i].size(),Min);
        }
    }
    vector<intp> ans;

    rep(i,n){
        if(list[i].count(x)!=0 && list[i].size()==Min){
            intp p= make_pair(list[i].size(),i+1);
            ans.push_back(p);
        }
    }

    vsort(ans);
    cout << ans.size() << nl;
    rep(i,ans.size()){
        if(i!=0)cout << " ";
        cout << ans[i].S;
    }
    cout << nl;

}
