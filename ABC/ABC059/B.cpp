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
    string a,b;
    cin >> a >> b;
    if(a.size()!=b.size()){
        cout << (a.size()>b.size()? "GREATER":"LESS") << nl;
        return 0;
    }

    rep(i,a.size()){
        if(a[i]>b[i]){
            cout << "GREATER" << nl;
            return 0;
        }
        else if(a[i]<b[i]){
            cout << "LESS" << nl;
            return 0;
        }
    }
    cout << "EQUAL" << nl;
}