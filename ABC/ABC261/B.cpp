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
#define LL_MAX 9223372036854775807

int main() {
    int n;
    cin >> n;
    vcc vec(n,vc(n));
    rep(i,0,n){
        rep(j,0,n){
            cin >> vec[i][j];
        }
    }
    map<char,char> c;
    c['W']='L';
    c['L']='W';
    c['D']='D';
    c['-']='-';

    rep(i,0,n){
        rep(j,0,n){
            if(c[vec[i][j]]!=vec[j][i]){
                cout << "incorrect" << nl;
                return 0;
            }
        }
    }
    cout << "correct" << nl;
}