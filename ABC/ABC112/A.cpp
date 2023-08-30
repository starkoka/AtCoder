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
    switch(n){
        case 1:
            cout << " Hello World" << nl;
            break;
        case 2:
            int a,b;
            cin >> a >> b;
            cout << a+b << nl;
            break;
    }
}
