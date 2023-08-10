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
    int h,w,n;
    cin pp h pp w pp n;
    vii list(1502,vi(1502,0));
    rep(i,n){
        int a,b,c,d;
        cin pp a pp b pp c pp d;
        list[a][b]+=1;
        list[c+1][b]-=1;
        list[a][d+1]-=1;
        list[c+1][d+1]+=1;
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            list[i][j] = list[i][j-1] + list[i][j];
        }
    }

    for(int j=1;j<=w;j++){
        for(int i=1;i<=h;i++){
            list[i][j] = list[i-1][j] + list[i][j];
        }
    }

    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(j!=1)cout qq " ";
            cout qq list[i][j];
        }
        cout qq nl;
    }
}