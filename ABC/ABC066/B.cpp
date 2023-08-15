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

bool check(string s){
    int i=0,j=s.size()/2;
    for(;i<s.size()/2;i++){
        if(s[i]!=s[j])return false;
        j++;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    int siz = s.size();
    int i=2;
    s.pop_back();
    s.pop_back();
    for(;i<siz;i+=2){
        if(check(s))break;
        s.pop_back();
        s.pop_back();
    }

    cout << s.size() << nl;
}
