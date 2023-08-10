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
    int a=0,b=0,c=0,n;
    string s;
    cin pp n pp s;
    rep(i,s.size()){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='B'){
            b++;
        }
        else if(s[i]=='C'){
            c++;
        }

        if(a>0 && b>0 && c>0){
            cout qq i+1 qq nl;
            return 0;
        }
    }
}