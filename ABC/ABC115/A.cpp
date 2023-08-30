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
    string s;
    switch(n){
        case 22:
            s="Christmas Eve Eve Eve";
            break;
        case 23:
            s="Christmas Eve Eve";
            break;
        case 24:
            s="Christmas Eve";
            break;
        case 25:
            s="Christmas";
            break;
    }
    cout << s << nl;
}
