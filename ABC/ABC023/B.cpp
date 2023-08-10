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
    int n,i=0;
    string s,t="b";
    cin >> n >> s;
    while(n>t.size()){
        i++;
        switch(i%3){
            case 1:
                t = "a" + t + "c";
                break;
            case 2:
                t = "c" + t + "a";
                break;
            case 0:
                t = "b" + t + "b";
                break;
        }
    }
    if(s==t){
        cout << i << nl;
    }
    else{
        cout << -1 << nl;
    }
}