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
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"


int main() {
    int n;
    cin >> n;
    int now = 0,all=0;
    vector<tuple<double,int,int>> list(0);
    rep(i,n){
        int x,y,z;
        cin >> x >> y >> z;
        all += z;
        if(x>y){
            now += z;
        }
        else{
            int num = (x+y)/2+1-x;
            list.push_back(make_tuple((double)num/(double)z,z,num));
        }
    }
    if(all/2<now){
        cout << 0 << nl;
        return 0;
    }

    int ans = INT_MAX;
    vsort(list);
    reverse(list.begin(),list.end());
    cout << ans << nl;
}
