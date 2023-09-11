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
    int a,b,w;
    cin >> a >> b >> w;
    w *= 1000;
    int m=INT_MAX,M=0;

    rep(i,1,1000001){
        if(a*i <= w && b*i >= w){
            m=min(m,i);
            M=max(M,i);
        }
    }
    if(M==0){
        cout << "UNSATISFIABLE" << nl;
    }
    else{
        cout << m << " " << M << nl;
    }
}