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
    int m;
    cin pp m;
    if(m<100){
        cout qq "00" qq nl;
    }
    else{
        if(m<=5000){
            if(m<1000)cout qq "0" qq m/100 qq nl;
            else{
                cout qq m/100 qq nl;
            }
        }
        else{
            if(m <= 30000){
                cout qq m/1000+50 qq nl;
            }
            else if(m <= 70000){
                cout qq (m-30000)/5000+80 qq nl;
            }
            else{
                cout qq 89 qq nl;
            }
        }
    }
}