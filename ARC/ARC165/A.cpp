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
template <typename T>
bool chmax(T &a,const T& b){if(a<b){a=b;return true;}return false;}
template <typename T>
bool chmin(T &a,const T& b){if(a>b){a=b;return true;}return false;}

bool check;

set<int> divisor(int n){
    set<int> result;
    check = false;
    int i=2;
    for(;i<=sqrt(n);i++){
        if(n%i==0){
            n/=i;
            result.insert(i);
        }
        while(n%i==0){
            n/=i;
            result.insert(i);
        }
    }
    if(n>1)result.insert(n);
    return result;
}

int main() {
    int t;
    cin >> t;
    rep(i,0,t) {
        int n;
        cin >> n;
        set<int> d = divisor(n);
        cout << (d.size()>1 ? "Yes":"No") << nl;
    }
}