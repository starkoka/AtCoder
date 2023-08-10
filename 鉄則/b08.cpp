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
    vii list(1500,vi(1500,0));
    int n,q;
    cin pp n;
    rep(i,n){
        int x,y;
        cin pp x pp y;
        list[x-1][y-1]++;
    }

    rep(i,1500){
        rep(j,1500){
            list[i][j] = (j==0 ? list[i][j] : list[i][j] + list[i][j-1]);
        }
    }

    rep(j,1500){
        rep(i,1500){
            list[i][j] = (i==0 ? list[i][j] : list[i][j] + list[i-1][j]);
        }
    }

    cin pp q;
    rep(i,q){
        int a,b,c,d;
        cin pp a pp b pp c pp d;
        cout qq list[c-1][d-1] + (a-2>=0 && b-2>=0 ? list[a-2][b-2] : 0) - (d-2>=0 ? list[c-1][b-2] : 0) - (a-2>=0 ? list[a-2][d-1] : 0) qq nl;
    }
}