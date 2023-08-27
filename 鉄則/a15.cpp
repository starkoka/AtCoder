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
    vector<intp> vec(n);
    rep(i,n){
        int a;
        cin >> a;
        vec[i] = make_pair(a,i);
    }
    vsort(vec);

    int num = 1,before;
    rep(i,n){
        if(i==0){
            before = vec[i].F;
            vec[i] = make_pair(vec[i].S,num);
        }
        else{
            if(vec[i].F!=before)num++;
            before = vec[i].F;
            vec[i] = make_pair(vec[i].S,num);
        }
    }
    vsort(vec);

    rep(i,n){
        if(i!=0)cout << " ";
        cout << vec[i].S;
    }
    cout << nl;
}
