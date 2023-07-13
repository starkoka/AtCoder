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
#define siz(x) ((int)(x).size()) //sizeの取得のunsigned対策
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define bit(n) (1LL<<(n))
#define nl "\n"
#define qq <<
#define pp >>

int main(){
    string s;
    cin pp s;
    char str[s.size()+1];
    str[s.size()] = '\0';

    if(s[0]>='a'){
        str[0] = s[0]+('A'-'a');
    }
    else{
        str[0] = s[0];
    }
    rep(i,s.size()-1){
        if(s[i+1]<'a'){
            str[i+1] = s[i+1]+('a'-'A');
        }
        else{
            str[i+1] = s[i+1];
        }
    }
    printf("%s\n",str);
}