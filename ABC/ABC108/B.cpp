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
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = x2-x1,dy = y2-y1;

    int x = x2,y = y2;
    rep(i,2){
        int _dx = dy*-1;
        int _dy = dx;
        dx = _dx;
        dy = _dy;
        x += dx;
        y += dy;
        cout << x << " " << y << " ";
    }
    cout << nl;
}
