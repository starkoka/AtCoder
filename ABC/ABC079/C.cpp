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
    char n[5];

    scanf("%s",n);
    rep(i,4){
        n[i] = n[i] - '0';
    }
    brep(i,3){
        bitset<3> b(i);
        char ans = n[0];
        rep(j,3){
            if(b.test(j)){
                ans += n[j+1];
            }
            else{
                ans -= n[j+1];
            }
        }
        if(ans == 7){
            cout qq n[0]+0;
            rep(j,3){
                cout qq ((b.test(j))? '+' : '-');
                cout qq n[j+1]+0;
            }
            cout qq "=7" qq nl;
            return 0;
        }
    }


    return 0;
}