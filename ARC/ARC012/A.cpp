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
    vi list(4);
    int all=0;
    rep(i,4){
        cin >> list[i];
        all += list[i];
    }

    brep(i,4){
        bitset<4> b(i);
        int n=0;
        rep(j,4){
            if(b.test(j)){
                n += list[j];
            }
        }
        if(n*2==all){
            cout << "Yes" << nl;
            return 0;
        }
    }
    cout << "No" << nl;
}