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
    int h,w,n;
    cin >> h >> w >> n;
    int a[h][w];
    for(int i = 0;i < h;i++)for(int j = 0;j < w;j++) a[i][j] = 0;
    while(n--){
        int x,y,t;
        cin >> x >> y >> t;
        if(t == 1){
            for(int i = 0;i < x;i++)for(int j = 0;j < w;j++) a[i][j] = 1;
        }
        else if(t == 2){
            for(int i = x;i < h;i++)for(int j = 0;j < w;j++) a[i][j] = 1;
        }
        else if(t == 3){
            for(int i = 0;i < h;i++)for(int j = 0;j < y;j++) a[i][j] = 1;
        }
        else{
            for(int i = 0;i < h;i++)for(int j = y;j < w;j++) a[i][j] = 1;
        }
    }

    int ans = 0;
    for(int i = 0;i < h;i++)for(int j = 0;j < w;j++) ans += !a[i][j];

    cout << ans << endl;
}