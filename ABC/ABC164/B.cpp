#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using intp = pair<int,int>;
using uset = unordered_set<int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
#define outset(x) cout << setprecision(x)
#define F first
#define S second
#define nl "\n"


int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i = 0; a>0 && c>0;i++){
        if(i%2==0){
            c -= b;
        }
        else{
            a -= d;
        }
    }

    if(a>0){
        cout << "Yes" << nl;
    }
    else{
        cout << "No" << nl;
    }
}