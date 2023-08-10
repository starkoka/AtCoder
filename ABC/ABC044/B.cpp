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
    string s;
    cin >> s;
    vc list(26,0);
    rep(i,s.size()){
        list[s[i]-'a']++;
    }

    bool flag=true;
    rep(i,26){
        if(list[i]%2==1)flag=false;
    }
    if(flag){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}