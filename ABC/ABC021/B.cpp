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
    int n,a,b,k;
    cin pp n pp a pp b pp k;
    uset list;
    list.insert(a);
    list.insert(b);
    rep(i,k){
        int p;
        cin pp p;
        if(list.count(p)!=0){
            cout qq "NO" qq nl;
            return 0;
        }
        else if(b==p){
            if(i+1!=k){
                cout qq "NO" qq nl;
                return 0;
            }
        }
        else{
            list.insert(p);
        }
    }
    cout qq "YES" qq nl;
}