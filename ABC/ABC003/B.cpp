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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(void){
    string s,t;
    cin pp s pp t;
    rep(i,s.size()){
        if(s[i]!=t[i]){
            if(s[i]=='@'){
                if(s[i]=='@' && t[i]=='a' || t[i]=='a' || t[i]=='t' || t[i]=='c' || t[i]=='o' || t[i]=='d' || t[i]=='e' || t[i]=='r'){

                }
                else{
                    cout qq "You will lose" qq nl;
                    return 0;
                }
            }
            else if(t[i]=='@'){
                if(s[i]=='a' || s[i]=='a' || s[i]=='t' || s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='r'){

                }
                else{
                    cout qq "You will lose" qq nl;
                    return 0;
                }
            }
            else{
                cout qq "You will lose" qq nl;
                return 0;
            }
        }
    }
    cout qq "You can win" qq nl;
}