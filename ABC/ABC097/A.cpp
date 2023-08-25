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
#define vsort(x) sort(x.begin(),x.end());
#define F first
#define S second
#define nl "\n"



int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(abs(a-c)<=d){
        cout << "Yes" << nl;
    }
    else if(abs(a-b)<=d && abs(b-c)<=d){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}
