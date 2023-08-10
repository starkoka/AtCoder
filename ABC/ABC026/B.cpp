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
    int n;
    long double all=0;
    cin >> n;
    vi list(n);
    rep(i,n){
        cin >> list[i];
    }
    vsort(list);

    rep(i,n){
        long double r = list[i];
        if(i%2==0){
            all += r*r;
        }
        else{
            all -= r*r;
        }
    }

    printf("%.14Lf\n", max(all*3.1415926535,all*-3.1415926535));
}