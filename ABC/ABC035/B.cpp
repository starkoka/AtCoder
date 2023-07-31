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
    int t;
    intp now = make_pair(0,0);
    cin >> s >> t;

    vsort(s);
    int l = upper_bound(s.begin(),s.end(),'L') - lower_bound(s.begin(),s.end(),'L');
    int r = upper_bound(s.begin(),s.end(),'R') - lower_bound(s.begin(),s.end(),'R');
    int u = upper_bound(s.begin(),s.end(),'U') - lower_bound(s.begin(),s.end(),'U');
    int d = upper_bound(s.begin(),s.end(),'D') - lower_bound(s.begin(),s.end(),'D');
    int q = s.size()-l-r-u-d;

    now.F=abs(r-l);
    now.S=abs(u-d);

    if(t==1){
        cout << now.F+now.S+q << nl;
    }
    else{
        if(now.F+now.S>=q){
            cout << now.F+now.S-q << nl;
        }
        else{
            q -=now.F+now.S;
            cout << q%2 << nl;
        }
    }

    return 0;
}