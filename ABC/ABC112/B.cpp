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
    int n,t;
    cin >> n >> t;
    vector<intp> vec;
    rep(i,n){
        int C,T;
        cin >> C >> T;
        if(T<=t)vec.push_back(make_pair(C,T));
    }

    vsort(vec);
    if(vec.size()==0){
        cout << "TLE" << nl;
    }
    else{
        cout << vec[0].F << endl;
    }
}
