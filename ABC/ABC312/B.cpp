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
    vcc list(n,vc(m,0));

    rep(i,n){
        string s;
        cin >> s;
        rep(j,m){
            list[i][j] = s[j];
        }
    }

    rep(i,n-9+1){
        rep(j,m-9+1){
            if(list[i][j] == '#' && list[i][j+1] == '#' && list[i][j+2] == '#' && list[i+1][j] == '#' && list[i+1][j+1] == '#' && list[i+1][j+2] == '#' && list[i+1][j+2] == '#' && list[i+2][j] == '#' && list[i+2][j+1] == '#' && list[i+2][j+2] == '#'){
                if(list[i+3][j] == '.' && list[i+3][j+1] == '.' && list[i+3][j+2] == '.' && list[i+3][j+3] == '.' && list[i][j+3]=='.' && list[i+1][j+3]=='.' && list[i+2][j+3]=='.' && list[i+3][j+3]=='.' ){
                    i+=6;j+=6;
                    if(list[i][j] == '#' && list[i][j+1] == '#' && list[i][j+2] == '#' && list[i+1][j] == '#' && list[i+1][j+1] == '#' && list[i+1][j+2] == '#' && list[i+1][j+2] == '#' && list[i+2][j] == '#' && list[i+2][j+1] == '#' && list[i+2][j+2] == '#'){
                        i-=1;j-=1;
                        if(list[i][j] == '.' && list[i+1][j] == '.' && list[i+2][j] == '.' && list[i+3][j] == '.' && list[i][j+1] == '.' && list[i][j+2] == '.' && list[i][j+3] == '.'){
                            cout << i+1-6+1 << " " << j+1-6+1 << nl;
                        }
                        i+=1;j+=1;
                    }
                    i-=6;j-=6;
                }
            }
        }
    }
}