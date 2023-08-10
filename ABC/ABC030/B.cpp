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
    double n,m;
    cin >> n >> m;
    double l,s,ans;
    if(n>12)n-=12;

    l = n*30.0+30.0*(m/60.0);
    s = 6*m;

    ans = abs(l-s);
    if(ans>180)ans=360-ans;

    printf("%.12lf",ans);
}