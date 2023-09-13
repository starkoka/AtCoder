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
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int takahashi = x/(a+c)*a*b + min(x%(a+c),a)*b;
    int aoki = x/(d+f)*d*e + min(x%(d+f),d)*e;
    if(takahashi==aoki){
        cout << "Draw" << nl;
    }
    else if(takahashi>aoki){
        cout << "Takahashi" << nl;
    }
    else{
        cout << "Aoki" << nl;
    }
}