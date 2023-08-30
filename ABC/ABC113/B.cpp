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
    double n,t,a;
    cin >> n >> t >> a;
    vector<pair<double,int>> vec(n);
    rep(i,n){
        double h;
        cin >> h;
        vec[i] = make_pair(abs(a-(t-h*0.006)),i+1);
    }

    vsort(vec);
    cout << vec[0].S << nl;
}
