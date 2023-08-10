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
    int a,b;
    cin pp a pp b;
    if(b<10){
        cout qq (a*10+b)*2 qq nl;
    }
    else if(b<100){
        cout qq (a*100+b)*2 qq nl;
    }
    else{
        cout qq (a*1000+b)*2 qq nl;
    }
}