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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>


int main(void){
    vi list(8);
    rep(i,8){
        cin pp list[i];
    }

    if(list[0]%25 == 0 && list[0]>=100 && list[1]<=625){
        for(int i=1;i<8;i++){
            if(list[i]<list[i-1] || list[i]<100 || list[1]>625){
                cout qq "No" qq nl;
                return 0;
            }
        }
    }
    else{
        cout qq "No" qq nl;
        return 0;
    }
    cout qq "Yes" qq nl;
}