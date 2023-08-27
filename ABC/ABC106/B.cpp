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
    int n;
    cin >> n;
    //105, 135, 165, 189, 195
    if(n>=195){
        cout << 5;
    }
    else if(n>=189){
        cout << 4;
    }
    else if(n>=165){
        cout << 3;
    }
    else if(n>=135){
        cout << 2;
    }
    else if(n>=105){
        cout << 1;
    }
    else{
        cout << 0;
    }
    cout << nl;
}
