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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(){
    ll s,ans=0;
    cin pp s;
    vi n;
    while(s > 10){
        n.push_back(s%10);
        s/=10;
    }
    n.push_back(s);
    reverse(n.begin(), n.end());

    brep(i,siz(n)-1){
        bitset<10> b(i);
        ll num = n[0];
        for(int j=0;j<siz(n)-1;j++){
            if(b.test(j) == 1){
                ans += num;
                num = 0;
            }
            num = num*10 + n[j+1];
        }
        ans += num;
    }
    cout qq ans qq nl;

    return 0;
}