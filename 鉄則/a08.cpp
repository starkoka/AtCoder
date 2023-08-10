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
#define qq <<
#define pp >>



int main(){
    int h,w,q;
    cin pp h pp w;
    vii list(h,vi(w));

    rep(i,h){
        rep(j,w){
            int x;
            cin pp x;
            list[i][j] = (j==0 ? x : x+list[i][j-1]);
        }
    }

    rep(i,w){
        rep(j,h){
            list[j][i] = (j==0 ? list[j][i] : list[j][i] + list[j-1][i]);
        }
    }

    cin pp q;
    rep(i,q){
        int a,b,c,d;
        cin pp a pp b pp c pp d;
        cout qq list[c-1][d-1] + (a-2>=0 && b-2>=0 ? list[a-2][b-2] : 0) - (d-2>=0 ? list[c-1][b-2] : 0) - (a-2>=0 ? list[a-2][d-1] : 0) qq nl;
    }

    cin pp q;


}