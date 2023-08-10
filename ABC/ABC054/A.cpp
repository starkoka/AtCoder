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
    int a,b;
    cin >> a >> b;
    vi list={2,3,4,5,6,7,8,9,10,11,12,13,1};

    rep(i,13){
        if(a==list[i] && b==list[i]){
            cout << "Draw" << nl;
            break;
        }
        else if(a==list[i]){
            cout << "Bob" << nl;
            break;
        }
        else if(b==list[i]){
            cout << "Alice" << nl;
            break;
        }
    }
}